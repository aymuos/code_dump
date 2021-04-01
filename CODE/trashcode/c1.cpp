
#include<bits/stdc++.h>

using namespace std;
void trans(string a){
string fwd= a.substr(1)+a[0];
//cout<<a.substr(1)<<"\n";
int g=a.length()-1;
string bck=a[a.length()-1]+a.substr(0,g);
//cout<<a[a.length()-1]<<"\n";
//cout<<fwd<<"\t"<<bck;
if (fwd.compare(bck) == 0){
    cout<<"1";
}else{
    cout<<"0";
}
    
}

int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(!isalpha(str[i]))  
            exit(0);  
    }
    trans(str);
}