def solution(food):
    for i in range(1,len(food)):
        if food[i]%2: food[i]-=1
    L="0";food.pop(0)
    for i in range(len(food)-1,-1,-1):
        while food[i]>0:
            L=str(i+1)+L+str(i+1)
            food[i]-=2
    return L