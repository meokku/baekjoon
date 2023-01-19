N=int(input())
L=list(map(int,input().split()))
Y=0;M=0
for i in L:
    Y+=10*(i//30+1)
    M+=15*(i//60+1)
if Y>M: print("M",M)
elif Y<M: print("Y",Y)
else: print("Y M",Y)