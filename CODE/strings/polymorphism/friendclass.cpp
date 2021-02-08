#include<iostream>
using namespace std;
class B;
class A{
	private:
		int x=5;
		char s='S';
	public:
		 friend class B;
};

class B{
	public: 
		void mb(A obj){
			cout<<obj.x;
			cout<<obj.s;
		}
};

int main(){
	
	B obj;
	A obj2;
	obj.mb(obj2);
	return 0;
}
