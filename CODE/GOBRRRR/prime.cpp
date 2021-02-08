#include<iostream>
#include<cstring>
#include<string>
using namespace std;


bool isPrime(int num){
    bool flag=false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=false;
        }
        else
        {
            flag=true;
        }
        
    }

    return flag;
}

int main(){
    int sum=0;
    for(int j=2;j<=100;j++){
        if (isPrime(j)==true){
            sum+=j;
        }
       
    }
     cout<<sum<<endl;



    return 0;
}