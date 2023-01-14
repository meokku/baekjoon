def solution(k, m, score):
    n=0
    score.sort(reverse=True)
    for i in range(len(score)//m):
        n+=score[i*m:(i+1)*m][-1]*m
    return n