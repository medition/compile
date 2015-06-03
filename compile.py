#!user/bin/env python
#-*- coding:utf-8 -*-
from collections import namedtuple

rule=namedtuple('rule',['name','list',])
item=namedtuple('item',['name','left','rest'])

def add(a,b):
	a.extend([x for x in b if x not in a])
	return a

class LR0(object):
	def __init__(self,vt=None,vn=None,rl=None):
		self.rules=rl if rl else []
		self.Vt   =vt if vt else []
		self.Vn   =vn if vn else []
		self.V    =self.Vt+self.Vn
	
	def First(self,memb):
		if memb in self.Vt:return [memb,] # 终结符返回只包含自身的集合
		first=[]
		for x in [repl[0] for name,repl in self.rules if name==memb and name!=repl[0]]:
			first.extend(self.First(x))
		return list(set(first)) # 返回该终结符所有下属规则第一个符号的First集的并集

	def Follow(self,memb):
		follow=[]
		for name,repl in self.rules:
			i,j,l=0,1,len(repl)
			while i<l:
				if memb==repl[i]:
					follow.extend(self.Follow(name) if j==l else self.First(repl[j]))
				i,j=i+1,j+1 # 如果该符号在规则尾部，则取规则名符号的follow集的并集
		return list(set(follow))  # 如果不在尾部，则取下一符号的first集的并集

	def Closure(self,I):
		i=0
		while i<len(I):
			g,i=I[i],i+1
			if g.rest and g.rest[0] in self.Vn:
				for name,repl in self.rules:
					if name==g.rest[0]:
						x=item(name,[],repl)
						if x not in I:I.append(x)
		return I

	def Goto(self,I,X):
		J=[]
		for y in I:
			if y.rest and y.rest[0]==X:
				J.append(item(y.name,y.left+y.rest[:1],y.rest[1:]))
		return self.Closure(J)

class LR1(LR0):

	def Closure(self,I):
		i=0
		while i<len(I):
			g,h,i=I[i][0],I[i][1],i+1
			if g.rest and g.rest[0] in self.Vn:
				for name,repl in self.rules:
					if name==g.rest[0]:
						x=item(name,[],repl)
						for u in I:
							if x==u[0]:
								u[1]=list(set(u[1]+(self.First(g.rest[1]) if len(g.rest)>1 else h)))
								break
						else:
							I.append([x,self.First(g.rest[1]) if len(g.rest)>1 else h])
		return I

	def Goto(self,I,X):
		J=[]
		for g,h in I:
			if g.rest and g.rest[0]==X:
				J.append([item(g.name,g.left+g.rest[:1],g.rest[1:]),h])
		return self.Closure(J)

if __name__=='__main__':
	
	lr=LR1(['p','t','l','r','n',''],
	['g','w','e','m'],
	[rule('g',['w',]),
	rule('w',['w','p','e']),
	rule('w',['e',]),
	rule('e',['e','t','m']),
	rule('e',['m',]),
	rule('m',['l','w','r']),
	rule('m',['n',])])
	
	table=[[0 for v in range(len(lr.V))],[0 for v in range(len(lr.V))],]
	I=lr.Closure([[item('m',['l'],['w','r']),['',]],])
	i,L=1,[[],I,]
	while i<len(L):
		I=L[i]
		for t,x in enumerate(lr.V):
			J=lr.Goto(I,x)
			for j in range(len(L)):
				if J==L[j]:break
			else:
				L.append(J)
				table.append([0 for v in range(len(lr.V))])
				j+=1
			table[i][t]='g'+str(j) if j else '-'
		i+=1
	for i,I in enumerate(L):
		for x,y in I:
			if not x.rest:
				if x.name=='g':
					table[i][5]='acc'
				for j,t in enumerate(lr.rules):
					if x.name==t.name and x.left==t.list:
						for k,z in enumerate(lr.V):
							if z in y:
								table[i][k]='r'+str(j)
		pass
		
	for i,l in enumerate(table):
		print '%02d'%i,':', 
		for r in l:print '%-4s '%r,
		print
	pass
	