#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    int t ,y,u,i=0;
    cout<<"Enter the string to togggle";
    gets(str);
    for(i=0;str[i] !='\0';i++){
        if((str[i]>='A') && (str[i]<='Z')){
            str[i]=str[i]+32;
        }else if((str[i]>='a') && (str[i]<='z')){
            str[i]=str[i]-32;
        }

    }
    cout<<str;
    return 0; 
}
