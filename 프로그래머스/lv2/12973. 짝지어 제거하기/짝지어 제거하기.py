def solution(s):
    L=[]
    for i in s:
        if len(L)==0:
            L.append(i)
        elif L[-1]==i:
            L.pop()
        else: L.append(i)
    if L: return 0
    return 1