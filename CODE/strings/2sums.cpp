// 2 sum 
#include<iostream>
using namespace std;
void foundornot(int* arr,int t,int n){
    int i=0,j=0,d;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j] == t){
                d=true;
                break;
            }
        }

            if(d == true){
             cout<<"Points are"<<i<<"and"<<j<<endl;
             break;

            } else{
                cout<<"No 2 sum found";
                break;
            }
        }
    }
    
    int main(){
       int i,j,k,a,sum;
        int y[300];
        cout<<"Enter number of terms:";
        cin>>a;
        cout<<"Enter sum to find";
        cin>>sum;
        for(int i=0;i<a;i++){
            cin>>y[i];
        }
        foundornot(y,sum,a);
        return 0;

    }