#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int funcsum(int num){
    int z=0,sum=0;
    //find all divisors that divide num
    
        for(int j=2;j<=sqrt(num); j++)
        {
            if ((num%j)==0){
                if(j==(num/j)){
                    sum=sum+ j;
                }
                else 
                {
                    sum=sum+ j + (num/j);
                }
            }
        }
    return (sum+1);    
}
int main(){
    int n_test, n,d;
    //input number of test cases
    cout<<"YES";
    cin>>n_test;
    for(int i=0;i<n_test;i++){
        cin>>n;
        d=funcsum(n);
        if (d==n)
        {
            cout<<"YES";
        }
        else
            {
                cout<<"NO";
            }        
    }
    return (0);
}