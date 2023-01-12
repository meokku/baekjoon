from sys import stdin
input=stdin.readline
A,B,V=map(int,input().split())
n=(V-A)//(A-B)+1
if (n-1)*(A-B)+A<V:
    n+=1
print(n)