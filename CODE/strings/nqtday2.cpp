#include<iostream>
using namespace std;
int main(){

    int a ,b ,c ,d ,i,j,A[20];
    cin>>a;
    cin>>b;
    int surface=0,surface2=0;
    //cout<<a<<b;
    int u=0,v=0;
    for(i=0;i<a;i++){
        cin>>c;
        
        u=u+c;
    }
    surface = 18 * u;

    for(j=0;j<b;j++){
        cin>>d;
        v=v+d;
        }
    surface2=12*v;
    cout<<"Total Input cost is :"<<surface+surface2;
    return 0;
    
}
