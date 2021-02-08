#include<iostream>
using namespace std;

int reversenum(int num){

int x,r,temp,sum=0;
temp=num;
while(num>0){
    r=num%10;
    sum=sum*10+r;
    num=num/10;

}
   return sum;
/*else 
    cout<<"Error Occurred"<<endl;*/
}

int main(){
    int y,z;
    cout<<"Enter number to reverse"<<endl;
    cin>>y;
    cout<<"The reversed number is"<<reversenum(y)<<endl;
    return 0;
}