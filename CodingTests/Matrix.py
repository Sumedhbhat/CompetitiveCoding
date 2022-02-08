"""
* Infytq Test
? Given a set of 13 integers between 1 and 25 as an array, create a new array of size 25 and assign the value of 'X' to the index of numbers based on the original array and the rest as "O". Return 1 if the array has the element "X" or 2 if the array has the element "O" in a row, column or diagonal. Return 0 if the array does not have the element "X" or "O" in a row, column or diagonal.
"""

import numpy as np


class Matrix:
    indexesX = []
    indexesO = []
    def __init__(self, inarr):
        self.arr = ['' for i in range(25)]
        self.x = inarr

    def fill(self):
        inx = self.x
        arr = self.arr
        for i in range(len(arr)):
            if i in inx:
                arr[i] = 'X'
                self.indexesX.append(i)
            else:
                arr[i] = "O"
                self.indexesO.append(i)
        return arr

    def check(self):
        self.arr = self.fill()
        if (0 and 1 and 2 and 3 and 4) or (5 and 6 and 7 and 8 and 9) or (
                10 and 11 and 12 and 13 and 14) or (15 and 16 and 17 and 18 and 19) or (20 and 21 and 22 and 23 and 24) or (
                    0 and 6 and 12 and 18 and 24) or (4 and 8 and 12 and 16 and 20) in self.indexesX:
            return 1
        if (0 and 1 and 2 and 3 and 4) or (5 and 6 and 7 and 8 and 9) or (
                10 and 11 and 12 and 13 and 14) or (15 and 16 and 17 and 18 and 19) or (20 and 21 and 22 and 23 and 24) or (
                    0 and 6 and 12 and 18 and 24) or (4 and 8 and 12 and 16 and 20) in self.indexesO:
            return 2
        else:
            return 0


if __name__ == "__main__":
    x = [0, 1, 2, 3, 4, 6, 8, 10, 12, 14, 17, 21]
    m = Matrix(x)
    print(m.check())
    final=np.reshape(m.arr,(5,5))
    for i in range(5):
        for j in range(4):
            print(final[i][j],end=",")
        print(final[i][4])
        
