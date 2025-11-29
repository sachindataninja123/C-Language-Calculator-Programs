#include<stdio.h>
int main(){
    char operator;   
    int num1,num2,result;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter the value of num1,num2:\n");
    scanf("%d%d",&num1,&num2);

    switch(operator){
        case '+':
        result = num1+num2;
        printf("%d + %d =%d",num1,num2,result);
        break;
        case '-':
        result = num1-num2;
        printf("%d - %d =%d",num1,num2,result);
        break;
        case '*':
        result = num1*num2;
        printf("%d * %d =%d",num1,num2,result);
        break;
        case '/':
        if(num2 != 0){
            result = num1/num2;
        printf("%d / %d =%d",num1,num2,result);
        }
        else{
             printf("error: divison by zero is not allowed.\n");
             scanf("%d",&num2);
             result = num1/num2;
             printf("%d / %d = %d",num1,num2,result);
             }
        break;
        default:
        printf("invalid operator");
       
       

        

        
    }
    return 0;
    
}
