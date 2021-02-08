#include<iostream>
#include<cstring>
#include<string>
using namespace std;

bool isLeapYr(int year){
    bool flag=false; 

   if(((year%4==0)&&(year%100!=0)) || (year%400 == 0)){
       return true;
   }else {
     return false;
   }


}

int main(){
int yr;
cout<<"Enter the year"<<endl;
cin>>yr;
bool(yr)?cout<<"Leap yr":cout<<"Non-leap year";

 return 0;
}