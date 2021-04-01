//coins from n find max height
#include <bits/stdc++.h>
using namespace std;
float root(float n)
{
   
    float x = n;
    float y = 1;
  
    float e = 0.000001; 
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = n/x;
    }
    return x;
}
  
int maxheight(int N)
{
    int n = 1 + 8*N;
    int maxH = (-1 + root(n)) / 2;
    return maxH;
}
  

int main(int argc,char * argv[])
{
    int A[2];
    for(int i=1;i<argc;i++){
        int n=atoi(argv[1]);
        cout <<maxheight(n) << endl;
    }
    
    return 0;
}