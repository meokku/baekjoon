N=int(input())
R=[]
for i in range(N):
    a,b = map(int,input().split())
    R.append((a,b))
R.sort()
for i in range(N):
    print(R[i][0],R[i][1])