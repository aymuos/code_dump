#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,t,y,i;
     //cout<<no of brides and graooms
     cin>>n;
     char br[n];
     cin>>br;
     char groom[n];
     cin>>groom;
     int gr=0;
     int gm=0;
     for(int i=0;groom[i]!='\0';i++){
         if (groom[i]=='r'){
             gr+=1;
         }
         else gm+=1;

     }
     int count=0;
     for( int j=0;br[j]!='\0';j++){
         if(br[j]=='r'){
             if(gr>0){
                 gr-=1;
                 count+=1;
             }
             else break;

         }
         else if (gm>0){
             gm-=1;
             count+=1;
         }
         else break;
     }
cout<<n-count<<endl;
return 0;
}