def gcd(x,y):
    while y:
        x,y=y,x%y
    return x
def lcm(x,y):
    return x*y/gcd(x,y)

def solution(arr):
    while len(arr)>1:
        arr.append(lcm(arr[0],arr[1]))
        del arr[0:2]
    return arr[0]