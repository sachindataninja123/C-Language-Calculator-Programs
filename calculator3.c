#include<stdio.h>


int sum(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int divide(int a,int b);

int main(){
    int a,b,result;
    char optr;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&optr);
    printf("enter the value of a and b:\n");
    scanf("%d%d",&a,&b);

    switch(optr){
        case '+':
        printf("Result is = %d",sum(a,b));
        break;
        case '-':
        printf("Result is = %d",sub(a,b));
        break;
        case '*':
        printf("Result is = %d",multi(a,b));
        break;
        case '/':
        printf("Result is = %d",divide(a,b));
        break;
    }


    return 0;
}

int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multi(int a,int b){
    return a*b;
}
int divide(int a,int b){
    if( b!=0){
    return a/b;
    }
    else{
        printf("error! invalid input :so please enter valid input: ");
        scanf("%d",&b);

    return a/b;
    }
    
    
    
}