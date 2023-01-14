def solution(dartResult):
    R=[];b=0;cnt=0
    for _ in range(3):
        s=dartResult
        for i in range(2,len(dartResult)):
            if dartResult[i].isdigit():
                s=dartResult[:i]
                break
        print("s[-1]=",s[-1])
        if s[-1] not in ["*","#"]:
            if s[-1]=="S": R.append(int(s[:-1]))
            if s[-1]=="D": R.append(int(s[:-1])**2)
            if s[-1]=="T": R.append(int(s[:-1])**3)
        else:
            if s[-2]=="S": R.append(int(s[:-2]))
            if s[-2]=="D": R.append(int(s[:-2])**2)
            if s[-2]=="T": R.append(int(s[:-2])**3)
            if s[-1]=="*":
                if len(R)>1: R[-2]*=2
                R[-1]*=2
            if s[-1]=="#": R[-1]*=-1
        print(R);dartResult=dartResult[len(s):]
    return sum(R)