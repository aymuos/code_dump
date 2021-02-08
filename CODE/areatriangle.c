#include<stdio.h>
#include<math.h>
float area(float a,float b,float c){
    float s,a2,are;
    s= (a+b+c)/2.00;
    are= sqrt(s*(s-a)*(s-b)*(s-c));
    return are;
}

int main(){
    float a,b,c;
    printf("Enter the length of the 3 sides :");
    scanf("%f %f %f ",&a,&b,&c);

    printf("");
    printf("Required area is : %f",area(a,b,c));
    return 0;
}