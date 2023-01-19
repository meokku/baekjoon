def solution(num_list):
    A=B=0
    for i in range(len(num_list)):
        if num_list[i]%2==0: A+=1
        else: B+=1
    return A,B