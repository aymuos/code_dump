#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n,k,x,y;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k>>x>>y;
        if(x<((x+k)%n)){
        if ((y >=x) && (y<=(x+k)%n))
        {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }else if (x>((x+k)%n)){
    	if ((y <=x) && (y>=(x+k)%n))
        {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
	}
       /* if(i<=t-1){
        	break;
		}*/


    }

    return 0;
}
