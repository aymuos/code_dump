#include<bits/stdc++.h>
using namespace std;
int main(int argc,char *argv[]){
   /* int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    cout<<(a+b)<<endl;
    return 0;*/
    string str2[100];
 int k=0;
    int cnt=0;
    int k2=-1;

    do{
        k2++;
        cin>>str2[k2];
        cnt++;
        
        
    } while(str2[k2]!="q");
  str2[k2]='\0';

    cout<<str2[0];


   
return 0;



}
