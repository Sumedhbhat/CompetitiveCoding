class Person:
    def __init__(self, left, right):
        self.right = right
        self.left = left

    def display(self):
        print(self.right, self.left)


class Derive1(Person):
    def __init__(self, left, right, center):
        Person.__init__(self, left, right)
        self.center = center

    def display(self):
        print(self.right, self.left, self.center)


class Derive2(Person):
    def __init__(self, left, right):
        super().__init__(left, right)

    def display(self, left=0, right=0):
        print(left + right)


if __name__ == "__main__":
    x = Derive2(5, 4)
    x.display(2, 3)
