"""
* IFTYQ Coding test question
? You are given an input of one number and 2 arrays. The number denotes the total number of words to be taken into the input, lets call it n. The first array has n inputs and each input has two values seperated by a ",", let the array be called inarr and the value of the second input be val. The second input has a set of n strings seperated by ",", let it be called inar. If the value of the second input of the array inarr is positive then the first "val" letters of the string must be replaced by the corresponding string in inar. If the value is negative then the last "val" letters must be replaced by the corresponding last val letters in array inar. 
"""

from numpy import sort

class StringReplace:
    mainarr=[]
    replacearr=[]
    final=[]
    def __init__(self,x):
        self.x=x
    def inputValues(self):
        for i in range(self.x):
            self.mainarr.append(input().split(','))
            self.mainarr[i][1]=int(self.mainarr[i][1])
        self.replacearr=(input().split(','))
    def replace(self):
        self.inputValues()
        mainarr=self.mainarr
        replacearr=self.replacearr
        for i in range(self.x):
            mainstr=mainarr[i][0]
            repint=mainarr[i][1]
            repstr=replacearr[i]
            while len(repstr)<=abs(repint):
                repstr+=repstr
            if repint>0:
                mainstr=repstr[:repint] + mainstr[repint:]
            elif repint<0:
                mainstr=mainstr[:repint] + repstr[repint:]
            if not mainstr in self.final:
                self.final.append(mainstr)
    def sortfinal(self):
        self.final.sort(reverse=True)
        return sorted(self.final,key=len,reverse=True)

if __name__=='__main__':
    number=int(input("Enter the total number of strings "))
    x=StringReplace(number)
    x.replace()
    print(x.sortfinal())


"""
        output 
    * * Enter the total number of strings 4
    * * welcom,5
    * * betray,5
    * * know,-3
    * * trace,-3
    * * hello,pe,olive,al
    * * ['pepepy', 'hellom', 'trlal', 'kive']
"""