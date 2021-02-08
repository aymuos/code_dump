#include<iostream>
using namespace std;
int main(){
    long long int n,k,d,t,sum=0,mx,ak;
    long long int a[100]={0};
    //cout<<"Enter number of loops:";
    cin>>t;
    for(long long int i=0;i<t;i++){
        //cout<<"Enter n ,t,d value:\t";
        cin>>n;
        cin>>k>>d;
        for(long long int j=0;j<n;j++){
            //cout<<"Enter the sum values";
            cin>>ak;
            sum=sum+ak;

        }
        //cout<<"Calculating mx:\t"<<sum<<"and k is "<<k;
        mx=sum/k;
        //cout<<"mx is \t "<<mx<<"\n";
        if (mx>d){
            cout<<d<<"\n";

        }else{
            cout<<mx<<"\n";
        }
        sum=0;
    }
    return 0;
    
}
