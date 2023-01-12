import sys

dp = [1]*1000001
dp[0] = 0
dp[1] = 0

for i in range(2, 1001):
    if dp[i]:
        for j in range(i * i, 1000001, i): # i의 배수를 지워 나감
            dp[j] = 0

def check_goldbach(n):
    for i in range(2, n):
        if dp[i] and dp[n - i]:
            print(f'{n} = {i} + {n - i}')
            return 0
    return 1

while 1:
    n = int(sys.stdin.readline())
    if n == 0:
        break
    if check_goldbach(n):
        print("Goldbach's conjecture is wrong.")