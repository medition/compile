#coding:utf-8

from LR1 import *
from Queue import Queue
import re


#test for LR1
def testFirst():
    lr = LR1(['p','t','l','r','n',''],
    ['g','w','e','m'],
    [rule('go',['w',]),
    rule('w',['p']),
    rule('w',['w','p','e']),
    rule('w',['e',]),
    rule('e',['e','t','m']),
    rule('e',['m',]),
    rule('m',['l','w','r']),
    rule('m',['n',])])
    print lr.first('go')

def testClosure():
    # lr = LR1(['p','t','l','r','n',''],
    # ['g','w','e','m'],
    # [rule('g',['w',]),
    # rule('w',['w','p','e']),
    # rule('w',['e',]),
    # rule('e',['e','t','m']),
    # rule('e',['m',]),
    # rule('m',['l','w','r']),
    # rule('m',['n',])])
    lr = LR1(['a','b','$'],
             ['G','S','A'],
             [rule('G',['S']),
              rule('S',['S','A']),
              rule('S',['A']),
              rule('A',['a','S','b']),
              rule('A',['a','b'])]
    )
    l = [closureItem(item('G', [], ['S']), ['$'])]
    tmp = lr.closure(l)
    print tmp
    for x in  lr.goto(tmp,'a'):
        print x
    return l

def testCreateTable():
    lr = LR1(['a','b','$'],
             ['G','S','A'],
             [rule('G',['S']),
              rule('S',['S','A']),
              rule('S',['A']),
              rule('A',['a','S','b']),
              rule('A',['a','b'])]
    )
    table = lr.closureSet()
    print len(table)
    f = open ("table.txt","w")
    for index,x in enumerate(table):
        print >>f, "state%d:"%(index+1)
        for y in x:
            print >>f, y
        print >>f,"\n\n"


def testfillTable():
    lr = LR1(['a','b','$'],
             ['G','S','A'],
             [rule('G',['S']),
              rule('S',['S','A']),
              rule('S',['A']),
              rule('A',['a','S','b']),
              rule('A',['a','b'])]
    )
    at,gt = lr.fillTable()
    V = lr.nTerminal + lr.terminal
    j = 0
    while j < (len(at)+1):
        if j==0:
            print "%2d"%j,
            for i in range(len(V)):

                if i < len(lr.terminal):
                    print "%20s"%lr.terminal[i],
                else:
                    print "%20s"%lr.nTerminal[i-len(lr.terminal)],
            j += 1
            print
        print "%2d"%j,
        for i in range(len(V)):
            # print "%2d"%j,
            if i < len(lr.terminal):
                print "%20s"%at[j-1][i],
            else:
                print "%20s"%gt[j-1][i-len(lr.terminal)],
        print
        j += 1

def testPrintTable():
    lr = LR1(['a','b','$'],
             ['G','S','A'],
             [rule('G',['S']),
              rule('S',['S','A']),
              rule('S',['A']),
              rule('A',['a','S','b']),
              rule('A',['a','b'])]
    )
    lr.printTable()


def testParseInput():
    lr = LR1(['a','b','$'],
             ['GG','S','AA'],
             [rule('GG',['S']),
              rule('S',['S','AA']),
              rule('S',['AA']),
              rule('AA',['a','S','b']),
              rule('AA',['a','b'])],
             debug=True
    )
    lr.fillTable()
    q = Queue()
    q.put("a")
    q.put("b")
    q.put("a")
    q.put("b")
    q.put("a")
    q.put("b")
    q.put(lr.endSymbol)
    # lr.printTable()
    lr.parseInput(q)
# testFirst()
# testClosure()
# testCreateTable()
# testfillTable()
# testPrintTable()
# testParseInput()

#end test for LR1


#test for FileParse
def testParseRule():
    parse = FileParse('minic.txt',debug=True)
    parse.getSection()
    parse.parseRules()
    # for i in range(len(parse.lr.rules)):
    #     print parse.lr.rules[i],'\t','aciton:',parse.lr.ruleAction[i]
    # print parse.lr.nTerminal
    # print parse.lr.terminal
    print parse.lr.rules
    parse.lr.fillTable()
    parse.lr.printTable()
    # parse.lr.printClosureSet()
    print parse.lr.ruleAction
    # print parse.firstSection
    # for i in parse.secondSection.split(';')[4].split(":"):
    #     l = re.split('\W+',i)
    #     l.remove('')
    #     print l




testParseRule()

#end test for FileParse