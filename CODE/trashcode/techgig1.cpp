#include<bits/stdc++.h>
using namespace std;
#define N 10001
int main(){

    string str1;
    int y=0;
    int z=0; 

    //cout<<"Enter the numbers"
    cin.ignore( );
    getline(cin,str1);
    fflush(stdin);
    cin>>y>>z;

    if (y==str1.length()){
        cout<<""<<endl;
    }
    else if (y >=str1.length())
    exit(0);
    else if (z-y+1>str1.length()){
        string r =str1.substr(y,str1.length()-y);
        cout<<r<<endl;
        exit(0);
    }
    else {
        string s=str1.substr(y,z-y+1);
        cout<<s;
    }

    return 0;


}