#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
bool isPrime(int num);

// 48 -57

int main(){
	char string[100];
	int i,n=0;
	int A[100];
	bool flag;
	cout >> "Enter the string literal";
	fgets(stringA);
	int len=strlen(stringA);
	/*while(n<len){
		a=	int(stringA[n])
	}*/
	for(i=0;j=0;i<len;i++;j++){
		A[j]=int(string(i));
	}
	for(j=0;j<100;j++){
		if (A[j]={48,49,50,51,52,53,54,55,56,57,58})
		{
			sum = sum+A[j];
		}
	cout<<sum<<" This is the required sum value "<<endl;
	
	}
	flag= isPrime(sum);
	if(flag == true)
		{
			cout<<sum <<"is a prime number"<<endl;
		}
	else{
		cout<<sum <<"is not a prime number"<<endl;
	}
	
	//cout<<"STRING is "<<int(string);
	return (0);

}

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
