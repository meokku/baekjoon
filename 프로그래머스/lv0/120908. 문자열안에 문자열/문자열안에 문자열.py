def solution(str1, str2):
    for i in range(len(str1)-2):
        if str2 in str1:
            return 1
    else:
        return 2