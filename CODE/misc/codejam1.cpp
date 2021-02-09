#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

struct output{
        int rowc=0,colc=0;
    };
    typedef struct output Struct;

enum boolean {FALSE, TRUE};
int findTrace(int mat[][], int n) 
{ 
    int sum = 0; 
    for (int i=0; i<n; i++) 
         sum += mat[i][i]; 
    return sum; 
} 

auto detectLatin(int side, int sq[]) {
  int isLatin = TRUE;
Struct s;
    
  for (int i = 0; i < (side * side); i++) {
    // check column
    for (int j = side; j <= (side * side); j += side) {
      if (i >= side && i - j >= 0) {
        if (sq[i] == sq[i - j]) {
          isLatin = FALSE;

          s.rowc=s.rowc+1;
        }
      }
    }

    // check row
    int rowMod = i % 5;
    int rowStart = i - rowMod;
    for (int k = rowStart; k < (rowStart + 5); k++) {
      if (i != k && sq[i] == sq[k]) {
        isLatin = FALSE;
       s.colc=s.colc+1;
      }
    }
  }

  return s;
}
int main(){
    int mat[][INT_MAX];
    long long int t,p,x,y,j,i,e;
    Struct outy;
    cin>>t;
    //t number of test cases
    for (int f=0;f<t;f++){
        cin>>p;
        int mat1[p][p];
         for (int i = 0; i < p; i++) { 
        for (int j = 0; j < p; j++) { 
           outy=detectLatin(p,mat1[p][p]);
           e=findTrace(mat[p][p],n);
           cout<<"Case #"<<f<<": "<<e <<outy.rowc<<outy.colc;

    }   

         }
}
return 0;}
