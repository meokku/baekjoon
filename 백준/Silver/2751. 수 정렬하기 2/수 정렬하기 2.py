from sys import stdin
input=stdin.readline
L=[]
for _ in range(int(input())):
    L.append(int(input()))
L.sort()
for i in L:
    print(i)