//fuel consumption in truck
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    float m,n,b,20
    a ;
    int i;
    printf("Enter the number of quantity of disel to fill up the tank : ");
    scanf("%0.2f",&m);
    printf("\n Distance Covered till tank goes dry: ");
    scanf("%0.2f",&b);
    if (m <= 0.0){
        printf("\n %.2f is an invalid innput",m);
    } else if (n <= 0.0) { 
        printf("\n  %.2f is an invalid innput",n);
    } else {
        a=(m/b) *100 ;
        printf("\n Litres /100 KM : \n %0.2f",a);
        printf("\n Miles/Gallon: \n %0.2f",(b* 0.6214)/(m *0.2642));

    }

    return 0;


    
}