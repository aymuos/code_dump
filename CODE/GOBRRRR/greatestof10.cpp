#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;



int main(){

    int a,b,c,d;
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    //int n= sizeof(arr)/sizeof(arr[0]);
    int n = 10;
    sort(arr,arr+n,greater<int>());
    cout<<arr[0];


    return 0;
}