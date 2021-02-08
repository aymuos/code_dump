#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    int i;
    if(x<=1){
        return false;
    }
    for(i=2;i<x;i++){
        if (x%i==0){
            return false;
        }
       
    }
     return true;
}
int main(){
    int a,b,i,j,flag=0;
    cout<<"Enter start and end";
    cin>>a>>b;
    cout<<"Required Primes are";

    for(int i=a;i<=b;i++){
       // cout<<" \n"<<i;

        if(i==1 || i==0){
           // continue;
           i=2;
        }
        if( isPrime(i)== true){
            flag++;
        }
       // cout<<flag;


    }
    cout<<"No of Primes:"<<flag;
    return 0;
}
