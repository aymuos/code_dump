#include<iostream>
using namespace std;
int main(){
    char str[30];
    int i,length=0;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        length++;

    }
    cout<<length;



}