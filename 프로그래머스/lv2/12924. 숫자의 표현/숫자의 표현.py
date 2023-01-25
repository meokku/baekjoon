def solution(n):
    cnt=0
    for i in range(1,n+1):
        r=0
        for j in range(i,n+1):
            r+=j
            if r>n: break
            if r==n: 
                cnt+=1
                break
    return cnt