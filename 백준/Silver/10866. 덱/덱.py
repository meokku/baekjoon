from sys import stdin
input=stdin.readline
R=[]
for _ in range(int(input())):
    L=list(input().split())
    if L[0]=="push_front": R.insert(0,L[1])
    if L[0]=="push_back": R.append(L[1])
    if L[0]=="pop_front":
        if R: print(R.pop(0))
        else: print(-1)
    if L[0]=="pop_back":
        if R: print(R.pop())
        else: print(-1)
    if L[0]=="size": print(len(R))
    if L[0]=="empty":
        if R: print(0)
        else: print(1)
    if L[0]=="front":
        if R: print(R[0])
        else: print(-1)
    if L[0]=="back":
        if R: print(R[-1])
        else: print(-1)