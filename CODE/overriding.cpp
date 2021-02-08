#include<iostream>
using namespace std;

class A{
    public:
    void disp(){
        cout<<"This is within parent class"<<endl;

    }
};

class B: public A{
    public:
    void disp(){
        cout<<"This is within child class"<<endl;
    }
};

int main(){
    A obj=B();
    obj.disp();
    return 0;
}