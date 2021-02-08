#include <iostream>

using namespace std;

int main() {
    int y,m=1;
    cin>>y;
    for(int i=10;i>=2;i--){
        if((y%i)==0){
            m=i;
            break;
        }
    
    }
    if(m!=1){
    cout<<m;
    }else {
        cout<<1;
    }
}