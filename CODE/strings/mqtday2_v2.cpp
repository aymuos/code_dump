#include<iostream>
using namespace std;

int main(){
    int in,ext;

    cin>>in>>ext;
   // cin>>ext;
   double inSum =0;
   double extSum=0;
   if( in!=0){
       for(int i=0;i<in;i++){
           double temp;
           cin>>temp;
           inSum+=temp;
       }
   }
   if(ext!=0){
       for(int j=0;j<ext;j++){
           double temp2;
           cin>>temp2;
           extSum+=temp2;

       }
   }
   cout<<(inSum*18+extSum*12);
   return 0;
}