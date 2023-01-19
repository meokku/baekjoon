N,K=map(int,input().split())
F=[];M=[];R=0
for _ in range(N):
    S,Y=map(int,input().split())
    if S: M.append(Y)
    else: F.append(Y)
for i in range(1,7):
    R+=M.count(i)//K+M.count(i)%K
    R+=F.count(i)//K+F.count(i)%K
print(R)