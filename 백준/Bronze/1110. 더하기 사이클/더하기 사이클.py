N=int(input())
M=(N//10+N%10)%10+N%10*10
cnt=1
while M!=N:
    M=(M//10+M%10)%10+M%10*10
    cnt+=1
print(cnt)