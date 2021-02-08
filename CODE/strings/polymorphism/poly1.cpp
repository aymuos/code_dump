// access specifiers
#include<iostream>
using namespace std;
class MyClass{
	public :
		int x;
		void method1(){
			cout<<"Hello World";
		}
	private:
		int y;
};

void MyClass::method(){
	cout<<"This is inside 2nd method"
}

int main(){
	MyClass obj;
	obj.x=25;
//wrong
//	obj.y=30;
obj.method1();
	return 0;
}
