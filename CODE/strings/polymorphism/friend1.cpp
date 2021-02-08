#include<iostream>
using namespace std;
class A{
	private:
		int x=5;
		char ch='Z';
	public:
		friend void disp(A obj);
};

void disp(A obj){
	cout<<obj.x<<endl;
	cout<<obj.ch<<endl;
}

int main(){
	A obj1;
	disp(obj1);
	return 0;
}
