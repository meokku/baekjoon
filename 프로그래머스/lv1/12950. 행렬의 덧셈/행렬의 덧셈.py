def solution(arr1, arr2):
    L=[]
    for i in range(len(arr1)):
        L.append([arr1[i][j]+arr2[i][j] for j in range(len(arr1[0]))])
    return L