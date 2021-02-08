//c program to check string is palindrome or not
#include<stdio.h>
#include<string.h>
char stack[50];
int top=-1; // initializing stack to be -1

void push(char argstr){
    top=top+1;
    stack[top]=argstr;
}

char pop(){
    char c;
    c=stack[top];
    top=top-1;
    return c;
}


int main(){
    char str[30];
    int i, count=0,len;
    printf("\n Enter the string: ");
    scanf("%s",str);
    len= strlen(str);
    for( i=0;i<len;i++){
        push(str[i]);
    }
    //input the string

    for(i=0;i<len;i++){
        if(str[i]==pop())
        {
            count ++;
        }

    }
    if(len == count){
        printf("\n sTring palindrome");
    } else {
        printf("\n String not palindrome");
    }

    return 0;    

}
