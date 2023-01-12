from sys import stdin
input=stdin.readline
N=int(input());NL=set(map(int,input().split()))
M=int(input());ML=list(map(int,input().split()))
arr=[0]*M
for i in range(M):
    if ML[i] in NL:
        arr[i]=1
print(*arr)