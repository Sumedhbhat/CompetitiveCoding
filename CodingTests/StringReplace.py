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