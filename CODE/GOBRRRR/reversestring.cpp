#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void reverse(string str){
    for(int i=str.length();i>=0;i--){
        cout<<str[i];
    }
}
int main(){
    string str;

    cout<<"Enter the string to reverse"<<endl;
    getline(cin,str);
    cout<<"The reversed string is : ";
    reverse(str);
    return 0;
}