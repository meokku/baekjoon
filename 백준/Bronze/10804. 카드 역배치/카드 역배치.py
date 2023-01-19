L=[i for i in range(1,21)]
for _ in range(10):
    a,b=map(int,input().split())
    L[a-1:b]=reversed(L[a-1:b])
print(*L)