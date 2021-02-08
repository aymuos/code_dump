#include<iostream>
using namespace std;
int main(){
    
    int x,n,p,v;
    float sum=0;
    cin>>n;
    cin>>x;{
        for(int i=0;i<n;i++){
            cin>>v;
            cin>>p;
            sum=sum+(v *p);
            if(sum>x*100){
                cout<<i+1;
                return 0;
            }
        }
        cout<<"-1";
    }

}