def solution(A,B):
    A.sort();B.sort(reverse=True);R=0
    for i,j in zip(A,B):
        R+=i*j
    return R