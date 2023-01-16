def solution(s):
    L=list(map(int,s.split()))
    R=[str(min(L)),str(max(L))]
    return ' '.join(R)