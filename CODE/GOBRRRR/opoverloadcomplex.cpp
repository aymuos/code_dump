#include<iostream>
#include<cstring>
#include<string>
using namespace std;


class complex{
    int real,imag;
    public:
    void set(){
        cout<<"Enter the real and imaginary parts";
        cin>>real>>imag;
    }

    friend complex operator+(complex,complex);

    void display(){
         cout<<"The sum is "<<real<<"+ i"<<imag;
    }
};

complex operator+(complex t1,complex t2){
    complex temp;
    temp.real=t1.real+t2.real;
    temp.imag=t1.imag+t2.imag;

    return temp;
}

int main(){
    complex t1,t2;
    t1.set();
    t2.set();
    t1=t1+t2;
    t1.display();
    return 0;
}