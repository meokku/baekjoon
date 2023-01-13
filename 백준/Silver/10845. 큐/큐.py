from sys import stdin
input=stdin.readline
L=[]
for _ in range(int(input())):
    R=input().split()
    if R[0]=="push":
        L.append(R[1])
    if R[0]=="pop":
        print(L.pop(0) if L else -1)
    if R[0]=="size":
        print(len(L))
    if R[0]=="empty":
        print(0 if L else 1)
    if R[0]=="front":
        print(L[0] if L else -1)
    if R[0]=="back":
        print(L[-1] if L else -1)