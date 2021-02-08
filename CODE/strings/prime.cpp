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
        return true;
    }
}

int fibona(int n){
    if ((n=1) || (n==2))
}
int main(){
    int x,q;
    cout<<"Enter no of numbers";
    cin>>x;
    for(int y=0;y<x;y++){
        cin>>q;
        isPrime(q)?cout<<"Prime \n " : cout<<"Non Prime \n";
       
    }
 return 0;
}
