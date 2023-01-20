import sys
input=sys.stdin.readline
N=int(input())
NL=sorted(list(map(int,input().split())))
M=int(input())
ML=list(map(int,input().split()))
R={}
for i in NL:
    if i in R: R[i]+=1
    else: R[i]=1
for i in ML:
    r = R.get(i)
    if r == None: print(0, end=" ")
    else: print(r, end=" ")