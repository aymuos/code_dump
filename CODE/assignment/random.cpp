#include<iostream>
// C++ program to generate random number
#include <cstdlib>
#include<time.h>
using namespace std;
int main(void) 
{ 
	// This program will create same sequence of 
	// random numbers on every program run 
	srand(time (NULL));
	
	// initializing three numbers 
	long long int a,b,c,sum;
	long long int A[3];
	a=100000+rand()%999999;
	b=100000+rand()%999999;
	//6s done
	c=10000+rand()%99999;
	A[0]=a;
	A[1]=b;
	A[2]=c;
	/*for (int i=0;i<3;i++){
		if(A[i]%2==0){
			A[i]=1*A[i];
		}
		else {
			A[i]=(-A[i]);
		}
	}*/
	cout<<a<<"\t\t";
	cout<<b<<"\t\t";
	cout<<c<<"\t\t";
	
	if(a%2==0){
			a=1*a;
		}
		else {
			a=-a;
		}
	cout<<a<<"\n\n";
		if(b%2==0){
			b=1*b;
		}
		else {
			b=-b;
		}
	cout<<b<<"\n\n";
		if(c%2==0){
			c=1*c;
		}
		else {
			c=-c;
		}
	cout<<c<<"\n\n";
	sum =a+b+c;
	cout<<"The required sum is" <<sum <<endl;  
	return 0; 
} 

