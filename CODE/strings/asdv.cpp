#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int search_elem){
    int mid;
    if(end>=start){
        mid=(start+end)/2;
        if(mid==search_elem){
            return mid+1;
        }
        else if(mid<search_elem){
            return binarySearch(arr,mid+1,end,search_elem);
        } else if(mid>search_elem){
            return binarySearch(arr,start,mid-1,search_elem);
        }
        
    }
    return -1;

}



void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int arr[],int n){
    
}