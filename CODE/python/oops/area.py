class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def get_area(self):
        return self.width * self.height


a = int(input("What is the width? :"))
b = int(input("What is the width? :"))

rec= Rectangle(a,b)
print(rec.get_area())