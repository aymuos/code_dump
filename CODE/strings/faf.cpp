#include<iostream>
using namespace std;
int* mac(int*p,int*q){
		if(*p>*q)
			return p;
		else
		 return q;
		 
	}
int main(){
	int x=10,y=20;
	int *m;
	m=max(&x,&y);
	cout<<*m;
	return 0;
	
	
	
	
}
