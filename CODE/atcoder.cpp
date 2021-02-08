#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if((str[i]==str[i+1]) && (str[i+1]==str[i+2])){
            cout<<"Won";
            break;
        }
        else{
            cout<<"Lost";
            break;
        }
    }
}