#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

void findifGCD(int arr[], int n){
    int result=arr[0];
    if (n=1){
        cout<<"NO";
    }
    for(int j=0;j<n;j++){
        for(int k=1;k<=n;k++){
            if(gcd(k,result)== arr[j]){
                cout<<"YES \n "<<endl;
            }
            else
            {
                /* code */
                cout<<"NO \n"<<endl;
            }
            

        }
        
        result=arr[j+1];
    }
}

int main(int argc, char const *argv[])
{
    int t,n;
    
    cin>>t;
    cin>>n;
    int B[n];
    for(int i=0;i<t;i++){
        cin>>B[i];
    }
    findifGCD(B,n);

    return 0;
}
