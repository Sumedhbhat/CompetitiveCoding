import math

t=int(input())
for i in range(t):
    s=input()
    czero,cone=0,0
    one= True 
    tot=0
    if s[0]=='1': one= True 
    else: one= False
    for j in s:
        if one:
            if j!='0':
                cone+=1
            else:
                czero=1
                one=False
                tot+=math.factorial(cone)
                cone=0
        else:
            if j!='1':
                czero+=1
            else: 
                one=True
                cone=1
                tot+=math.factorial(czero)
                czero=0

    if czero!=0:
        tot+=math.factorial(czero)
    if cone!=0:
        tot+=math.factorial(cone)
    print(tot%998244353)