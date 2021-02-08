#include<bits/stdc++.h>
using namespace std;
int output(string a){
    int r=0,count;
    for(int i=0;i<a.length();i++){
        for(int j=i+1;j<a.length();j++){
            if(a[i]==a[j]){
                r++;
            } else
                 break;
            if(r!=0){
                i=i+r;
                count=count+r;
                r=0;
            }
        }
    }
    return count;
}
int main(){
    int y;
    string str;
    cin>>y;
    for(int k=0;k<y;k++){
       cin>>str;
       cout<<output(str)<<endl;
    }
    return 0;

}
