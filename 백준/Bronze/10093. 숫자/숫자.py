A,B=map(int,input().split())
A,B=min(A,B),max(A,B)
L=[i for i in range(A+1,B)]
print(len(L))
print(*L)