#include<bits/stdc++.h> 
using namespace std;
 int main(int argc,char * argv[])  
 {  
 int a[100],i,n,b=0;  
 n=atoi(argv[1]);  
 a[0]=0;  
 for(i=1;i<n+1;i++)  
    a[i]=atoi(argv[1+i]);  
    a[n+1]=0;  
    a[n+2]=0;  
 while(b!=1)  
 {  
    for(i=0;i<n+1;i++)  
        if(a[i]==0&&a[i+1]==-1){  
            a[i+1]=0;  
            break;  
 }  
 for(i=n+2;i>1;i--)  
 if(a[i]==0&&a[i-1]==1)  
 {  
    a[i-1]=0;  
    break;  
 }  
 for(i=0;i<n+2;i++)  
 {  
    if(a[i]==1&&a[i+1]==-1)  
 {  
    a[i]=-1;  
    a[i+1]=1;  
 }  
 }  
 for(i=1,b=0;i<n+2;i++)  
 {  
    if(a[i]==1||a[i]==-1)  
    b++;  
 }  
 }  
 for(i=1;i<n+2;i++)  
 {  
 if(a[i]==1||a[i]==-1)  
 break;  
 }  
 cout<<i;  
 return 0;  
 }  