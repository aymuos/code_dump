class User:
    def __init__(self,nick,city):
        self.nickname = nick
        self.city = city

    def introduce(self):
        print("hello I am :", self.nickname, "and I am from :", self.city)


sample_usr = User("Soumya","Kolkata")
sample_usr.introduce()
print(sample_usr.nickname)
