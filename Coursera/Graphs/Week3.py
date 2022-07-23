class Median:
    def __init__(self, input):
        self.input = input
        self.count1 = 0
        self.count2 = 0
        self.median = 0
        self.low = [0]
        self.high = [0]

    def heapify(self):
        self.count1+1
        input = self.input
        self.insertLow(self.input[0])
        self.median += self.input[0]
        for i in range(1, len(input)+1):
            if(input[i] < self.low[1]):
                self.insertLow(input[i])
                self.count1 += 1
            else:
                self.insertHigh(input[i])
                self.count2+1
            if(self.count1 > self.count2+1):
                self.insertHigh(self.popLow())
                self.count1 -= 1
                self.count2 += 1
            elif self.count1+1 < self.count2:
                self.insertLow(self.popHigh())
                self.count1 += 1
                self.count2 -= 1
            median += self.computeMedian(self.count1, self.count2)
        return median % 10000

    def insertLow(self, i):
        self.low.append(i)
        loc = len(self.low)
        parent = loc//2
        while self.low[loc] > self.low[parent]:
            self.low[parent], self.low[loc] = self.low[loc], self.low[parent]
            loc = parent
            parent = loc//2

    def insertHigh(self, i):
        self.high.append(i)
        loc = len(self.high)
        parent = loc//2
        while self.high[loc] < self.high[parent]:
            self.high[loc], self.high[parent] = self.high[parent], self.high[loc]
            loc = parent
            parent = loc//2

    def popLow(self):
        self.low[1], self.low[len(self.low)] = self.low[len(
            self.low)], self.low[1]
        loc = 1
