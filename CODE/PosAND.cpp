#include<bits/stdc++.h>
using namespace std;

//rev array
void reverseArray(int arr[],int start,int end){
	if(start>=end)
		return;
		
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	reverseArray(arr,start+1,end-1);
		
}
//func converting dec to binary

void decToBinary(int n){
	long int binArr[100009];
	
	int i=0;
	while (n>0){
		binArr[i]=n%2;
		n=n/2;
		i++;
	}
	reverseArray(binArr,0,i-1);
	
	
}

int main(){
	int p[],i,j,k,t;
	cin>>
	for(i=0;i<)
	
	
	
	
}
	
