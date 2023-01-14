def solution(dartResult):
    R=[];Shot=["S","D","T"]
    for _ in range(3):
        s=dartResult
        for i in range(2,len(dartResult)):
            if dartResult[i].isdigit():
                s=dartResult[:i]
                break
        if s[-1] not in ["*","#"]:
            if s[-1] in Shot:
                R.append(int(s[:-1])**(Shot.index(s[-1])+1))
        else:
            if s[-2] in Shot:
                R.append(int(s[:-2])**(Shot.index(s[-2])+1))
            if s[-1]=="*":
                if len(R)>1: R[-2]*=2
                R[-1]*=2
            if s[-1]=="#": R[-1]*=-1
        dartResult=dartResult[len(s):]
    return sum(R)