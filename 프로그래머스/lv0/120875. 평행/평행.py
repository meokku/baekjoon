def solution(dots):
    L=[]
    for b in range(4):
        for i in range(b,4):
            if dots[b][1]-dots[i][1]!=0:
                L.append((dots[b][0]-dots[i][0])/(dots[b][1]-dots[i][1]))
    x = []
    new = []
    for i in L:
        if i not in x: 
            x.append(i)
        else:
            if i not in new:
                return 1
    return 0