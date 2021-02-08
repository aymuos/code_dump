#include<stdio.h>

int main(){
    int y ,u,t;
    printf("Enter the number of elements to store");
    scanf("%d",&y);
   // int* ptr=NULL;
    int* ptr= (int*)calloc(y,(sizeof(int)));
    if(ptr !=NULL){
    for(u=0;u<y;u++){
        scanf("%d",&ptr[u]);
    }
    } else {
        printf("\n Allocation error");
    }

    for(t=0;t<y;t++){
        printf("%d \t",ptr[t]);
    }
    ptr=realloc(ptr,y*sizeof(int));
    free(ptr);
    return 0;

}