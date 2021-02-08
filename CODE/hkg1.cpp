#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arrch[21];
	int t=0,r=0;
	cin.get(arrch,21);
	for(int i=0;i<strlen(arrch);i++){
		if (arrch[i]='z'){
			t=t+1;
			cout<<t;
		}
		else if(arrch[i]='o'){
			r=r+1;
			cout<<r;
		
		}
		}
	if (r==(2*t)){
		cout<<"YES";
		
	}
	else cout<<"NO";
	
	return 0;
	
}
