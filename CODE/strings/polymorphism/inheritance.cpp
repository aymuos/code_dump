#include<iostream>
using namespace std;
 class Parent{
 public:
 	int ix_p;

 };
 class Child:public Parent{
 public:
 	int ix_c;
 };

 int main(){
 	Child obj;
 	obj.ix_p=78;
 	obj.ix_c=99;
 	cout<<"Parent Object is "<<obj.ix_p;
 	cout<<"Child Object is "<<obj.ix_c;
 	return 0;
 }