from sys import stdin
input=stdin.readline
L=[]
for _ in range(int(input())):
    R=list(input().split())
    if R[0]=="push":
        L.append(R[1])
    if R[0]=="pop":
        print(L.pop() if L else -1)
    if R[0]=="size":
        print(len(L))
    if R[0]=="empty":
        print(1 if not L else 0)
    if R[0]=="top":
        print(L[-1] if L else -1)