#include<iostream>
#include<cstring>
#include<string>
using namespace std;


int main(){
    int x,y;
    cout<<"Enter two numbers : \t ";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"Reversed Numbers are:"<<x<<"\t"<<y;



    return 0;
}