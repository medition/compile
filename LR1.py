#coding:utf-8
from collections import namedtuple
import  re


rule = namedtuple("rule",["name","rule"])
item = namedtuple("item",["name","shifted","unshifted"])
closureItem = namedtuple("closureItem",["item","follow"])

class LR1:
    def __init__(self,terminal=[],nTerminal=[],rules=[],ruleActions=[],debug=False,logfile='parse.log'):
        #self.rules 是一个rule型的namedtuple,用来存储规则
        self.rules = rules
        #self.terminal 是用来存储终结符的列表
        self.terminal = terminal
        #self.nTerminal 是用来存储非终结符的列表
        self.nTerminal = nTerminal
        #结束符
        self.endSymbol = "$"
        #是否打印调试信息
        self.debug = debug
        self.actionTable = None
        self.gotoTable = None
        self.logfile = logfile
        self.ruleAction = ruleActions
        self.START = 'm3d1t10nStart'
        self.formatLength = 60
        self.formatString = "%%%ds" % self.formatLength

    def first(self,next):
        if next in self.terminal:#如果是终结符直接返回
            return [next]
        #下一个字符是非终结符时遍历self.rules,找到名字是next，且不是左递归的规则，求first
        _first = []
        for _rule in [ ruleExp[0] for name,ruleExp in self.rules if name==next and name!=ruleExp[0] ]:
            _first.extend(self.first(_rule))
        #返回一个不重复的里面列表
        return list(set(_first))

    def closure(self,closureItemList):
        """
parse such program
S' -> .S    [$]     (Go to 2)
S  -> .SA   [$a]    (Go to 2)
S  -> .A    [$a]    (Go to 3)
A  -> .aSb  [$a]    (Shift on a and go to 4)
A  -> .ab   [$a]    (Shift on a and go to 4)
"""
        i = 0
        #闭包长度不变时，停止循环
        while i < len(closureItemList):
            #循环变量增1
            _item,_follow,i = closureItemList[i].item,closureItemList[i].follow,i+1
            #如果子项中未移进的规则不为空，且第一位是非终结符
            if  len(_item.unshifted)>0 and _item.unshifted[0] in self.nTerminal:
                #遍历self.rules
                for name,ruleExp in self.rules:
                    #如果rule的name与未移进的第一项相同
                    if _item.unshifted[0]==name:
                        #复制一个name的规则
                        tmp = item(name,[],ruleExp)
                        #遍历closureItemList
                        for index,_closureItem in enumerate(closureItemList):
                            #如果tmp等于_closureItem.item,说明闭包中已包含此项，
                            if tmp == _closureItem.item:
                                # print 'func closure: before',closureItemList[index]
                                tl = _closureItem.follow +  (self.first(_item.unshifted[1]) if len(_item.unshifted)>1 else _follow)
                                closureItemList[index] = _closureItem._replace(follow= list(set(tl)) )
                                # print 'func closure: after',closureItemList[index]
                                break
                        #如果闭包中不包含tmp
                        else:
                            closureItemList.append(closureItem(tmp,self.first(_item.unshifted[1]) if len(_item.unshifted)>1 else _follow ))

        return closureItemList


    def goto(self,closureItemList,next):
        retList = []
        for _item,_follow in closureItemList:
            if _item.unshifted and _item.unshifted[0] == next:
                retList.append( closureItem(item(_item.name,_item.shifted+_item.unshifted[:1],_item.unshifted[1:]),_follow) )
        return self.closure(retList)

    def closureSet(self):
        rule = self.rules[0]
        CC = [self.closure( [closureItem(item(rule.name,[],rule.rule),[self.endSymbol])] )]
        i = 0
        while i< len(CC):
            for _closureItem in CC[i]:
                next = _closureItem.item.unshifted
                if next:
                    tmp = self.goto(CC[i],next[0])
                    if tmp not in CC:
                        CC.append(tmp)
            i += 1
        return CC

    def fillTable(self):

        closureSet = self.closureSet()
        stateLength = len(closureSet)
        actionTable = [ ([0]*len(self.terminal)) for i in range(stateLength)]
        gotoTable = [ ([0]*len(self.nTerminal)) for i in range(stateLength) ]
        for index,ci in enumerate(closureSet):
            for citem in ci :
                tUnshitfed = citem.item.unshifted
                if  tUnshitfed : #还有未移进的规则
                    if tUnshitfed[0] in self.terminal:#如果是终结符
                        tClosure = self.goto(ci,tUnshitfed[0])
                        try:
                            actionTable[index][self.terminal.index(tUnshitfed[0])] = 's:%d' % (closureSet.index(tClosure)+1)
                        except Exception,e:
                            print e
                            print 'error '

                    else:#如果是非终结符
                        tClosure = self.goto(ci,tUnshitfed[0])
                        try:
                            gotoTable[index][self.nTerminal.index(tUnshitfed[0])] = "%d" % (closureSet.index(tClosure)+1)
                        except Exception,e:
                            print e

                else:#如果没有要移进的规则，则规约
                    tmp = closureItem(item(self.rules[0].name,self.rules[0].rule,[]),[self.endSymbol])
                    if tmp == citem:  #结束状态
                        actionTable[index][self.terminal.index(citem.follow[0])] = 'accept'
                    else: #规约状态
                        for _nterminal in citem.follow:
                        # for _nterminal in [ nt for nt in citem.follow if nt!=self.endSymbol]:
                            actionTable[index][self.terminal.index(_nterminal)] = 'r:%s->%s'%(citem.item.name,':'.join(citem.item.shifted))

        self.markUnusedState(actionTable)
        self.markUnusedState(gotoTable)
        return (actionTable,gotoTable)



    def markUnusedState(self,_list):#遍历列表，如果状态为0，则将其置为'-'
        for i in range(len(_list)):
            for j in range(len(_list[i])):
                if _list[i][j]==0:
                    _list[i][j] = '-'

    def printTable(self): #打印actionTable 和 gotoTable
        at,gt = self.fillTable()
        V = self.nTerminal + self.terminal
        j = 0
        while j < (len(at)+1):
            if j==0:
                print "%2d"%j,
                for i in range(len(V)):

                    if i < len(self.terminal):
                        # print "%20s"%self.terminal[i],
                        print self.formatString % self.terminal[i],
                    else:
                        # print "%20s"%self.nTerminal[i-len(self.terminal)],
                        print self.formatString % self.nTerminal[i-len(self.terminal)],
                j += 1
                print
            print "%2d"%j,
            for i in range(len(V)):
                # print "%2d"%j,
                if i < len(self.terminal):
                    # print "%20s"%at[j-1][i],
                    print self.formatString % at[j-1][i],
                else:
                    # print "%20s"%gt[j-1][i-len(self.terminal)],
                    print self.formatString % gt[j-1][i-len(self.terminal)],
            print
            j += 1



    def parseInput(self,wordQueue):#解析输入
        actionTable,gotoTable =  self.fillTable()
        if self.debug == True : #是否处于调试状态，是则打印信息
            self.printTable()
            self.printClosureSet()
        #空的状态栈
        '''stack: [1, 'a', 4, 'b', 7]'''
        stateStack = []
        #加入初始状态
        startState = 1
        stateStack.append(startState)

        #从输入队列中获取下一个输入
        word = wordQueue.get()
        while True:
            # print 'top value:',stateStack[-1]
            # print 'top type:',type(stateStack[-1])
            if self.debug==True:#打印调试信息
                print 'stack:',stateStack,'\t','input',word,'\t','queue:',list(wordQueue.queue)

            currentState = stateStack[-1] - 1
            if word in self.terminal:
                tableState = actionTable[currentState][self.terminal.index(word)]
                if tableState[0] == 'r':
                    '''r:AA->a:S:b '''
                    #获取规则右部的表达式，并用':'分割
                    tmpRuleList = tableState.split("->")[-1].split(":")
                    # for i in range(len(tableState.split("->")[-1].split(":"))*2):
                    #弹出两倍长度的栈里元素
                    for i in range( len( tmpRuleList ) * 2 ):
                        stateStack.pop()
                    currentState = stateStack[-1] - 1
                    tmp = tableState.split("->")[0].split(":")[-1]
                    stateStack.append(tmp)
                    stateStack.append(int(gotoTable[currentState][self.nTerminal.index(tmp)]))
                    # tmpRule = rule()
                elif tableState[0] == 's':
                    '''s:4'''
                    stateStack.append(word)
                    stateStack.append(int(tableState.split(":")[-1]))
                    word = wordQueue.get()
                elif tableState=='accept':
                    break
                else:
                    self.parseFailed("parse error")
                    exit(-1)
            elif word in self.nTerminal:
                tableState = gotoTable[currentState][self.nTerminal.index(word)]
                if tableState!='-':
                    stateStack.append(word)
                    stateStack.append(int(tableState))
                    word = wordQueue.get()

            else:
                self.parseFailed("word not in terminal and nTerminal")

        self.parseSuccess("Success")

    def parseFailed(self,message):
        print "%s"%message


    def parseSuccess(self,message):
        print "%s" % message


    def printClosureSet(self):
        table = self.closureSet()
        print len(table)
        f = open (self.logfile,"w")
        for index,x in enumerate(table):
            print >>f, "state%d:"%(index+1)
            for y in x:
                print >>f, y
            print >>f,"\n\n"



class FileParse:
    def __init__(self,filename,debug=False):
        try:
            self.file = open(filename,'r')
        except:
            print "file doesn't exist!"
            exit(0)
        self.firstSection = ''
        self.secondSection = ''
        self.thirdSection = ''
        self.lr = LR1(debug=debug)
    def getSection(self):
        content = self.file.read()
        self.firstSection,self.secondSection,self.thirdSection = tuple(content.split("%%\n"))
        # print self.secondSection
        self.secondSection = self.clearComment(self.secondSection)
        print self.secondSection


    def clearComment(self,string):
        left = 0  #左括号次数
        right = 0 #右括号次数
        s = '' #返回的字符
        leftPos = 0 #左注释符位置
        rightPos = 0 #右注释符位置
        count = 0 #清空的注释数量
        startPos = 0 #开始截取字符串的位置
        i=0
        while i < len(string):
            if  left == right and left >0:
                count += 1
                s += string[startPos:leftPos]
                startPos = rightPos
                left = right = 0
            elif string [i:i+2] == '/*':
                left += 1
                leftPos = i
                i += 1
            elif string [i:i+2] == '*/':
                right += 1
                rightPos = i+2
                i += 1
            i += 1
        s += string[startPos:]
        print count
        return s if count > 0 else string

    def splitSectionBySemicolon(self,string):
        l = []
        leftBracketCount = 0
        count =0
        rightBracketCount =0
        lastPosition = 0
        for index,i in enumerate(string):
            if i==';' and leftBracketCount==rightBracketCount:
                l.append(string[lastPosition:index])
                lastPosition = index + 1
            elif i=='{':
                leftBracketCount += 1
                # count += 1
            elif i=='}':
                rightBracketCount += 1
                # count -= 1
        return l




    def parseRules(self):
        self.parseToken()
        # l = self.secondSection.split(";")
        l = self.splitSectionBySemicolon(self.secondSection)

        print l
        for _rule in l:
            _ruleline = _rule.split(':')
            ruleName = _ruleline[0]
            ruleExp = _ruleline[1]
            if len(self.lr.rules)==0:
                        self.expansionary(ruleName)
            for exp in  ruleExp.split("|"):
                result = self.getAction(exp)
                print result
                if isinstance(result,tuple):
                    # print ruleName,self.splitRule(result[0])
                    # print result[1]

                    self.addRule(ruleName,self.splitRule(result[0]))
                    self.addAction(result[1])

                else:
                    # print ruleName,self.splitRule(result)
                    self.addRule(ruleName,self.splitRule(result))
                    self.addAction(None)
        self.lr.nTerminal = list(set(self.lr.nTerminal))

    def expansionary(self,rulename):
        self.lr.nTerminal.append(self.lr.START)
        rulename = self.getPureRuleName(rulename)
        self.lr.rules.append(rule(self.lr.START,[rulename]))
        self.lr.ruleAction.append(None)


    def addRule(self,rulename,rules):
        rulename = self.getPureRuleName(rulename)
        self.lr.nTerminal.append(rulename)
        for i in rules:
            if i not in self.lr.terminal:
                self.lr.nTerminal.append(i)
        self.lr.rules.append(rule(rulename,rules))

    def addAction(self,action):
        self.lr.ruleAction.append(action)

    def clearValueInList(self,l,val):
        while True:
            try:
                l.remove(val)
            except Exception,e:
                return

    def splitRule(self,rule):
        rulelist = re.split("\W+",rule)
        self.clearValueInList(rulelist,'')
        return rulelist

    def getPureRuleName(self,rulename):
        rulenameList = re.split("\W+",rulename)
        self.clearValueInList(rulenameList,'')
        return rulenameList[0]

    def getAction(self,string):
        tString = ''
        d = {}
        self.getActionByBracket(string,d)
        return (''.join([i for i in d]),d) if len(d)>0 else string

    def getActionByBracket(self,string,d):
        count = 0
        leftCount =0
        rightCount =0
        left = -1
        right = -1

        for i in range(len(string)):
            if string[i] == '{':
                leftCount += 1
                count += 1
                left = i
            elif string[i] == '}':
                rightCount += 1
                count -= 1
                right = i
            if leftCount==rightCount and leftCount >0:
                d[string[:left]] = string[left:right+1]
                self.getActionByBracket(string[right+1:],d)
                break
        return d

    # def getAction(self,string):
        # leftBracketPostion =  string.find('{')
        # rightBracketPostion = string.rfind('}')
        # if leftBracketPostion == -1:
        #     return string
        # if rightBracketPostion == -1:
        #     print "lack of right bracket in rule:\n%s\n\n"%string
        #     exit(0)
        # action = string[leftBracketPostion:rightBracketPostion+1]
        # substring = string[:leftBracketPostion] + string[rightBracketPostion+1:]
        # return (substring,action)


    def parseToken(self):
        for line in re.split('[\n\r]+',self.firstSection):
            if '%token' == line[:6]:
                self.lr.terminal += self.getTerminal(line[7:])
        self.lr.terminal = list(set(self.lr.terminal))
        self.lr.terminal.append(self.lr.endSymbol)
        # print self.lr.terminal

    def getTerminal(self,string):
        terminalList = re.split("\W+",string)
        self.clearValueInList(terminalList,'')
        # print terminalList
        return terminalList
        # print self.clearValueInList(terminalList,'')
        # return self.clearValueInList(terminalList,'')

    def __exit__(self):
        self.file.close()



if __name__ == "__main__":
        parse = FileParse('minic.txt')
        parse.getFirstSection()
        # print parse.firstSection
        print parse.secondSection.split(';')
        # print parse.thirdSection




