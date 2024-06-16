class Car():
    def __init__(self,model,colour,initial_speed=0):
        self.model=model
        self.colour=colour
        self.__speed=initial_speed

        if initial_speed<0:
            self.__speed=0
    def speed_up(self):
        self.__speed+=5

    def speed_down(self):
        if self.__speed <5 :
            self.__speed=0
        else:
            self.__speed -= 5

    def show_speed(self):
        print('Current Speed:', self.__speed)

my_car= Car('nano','silver')
my_car.speed = 20
my_car.show_speed()