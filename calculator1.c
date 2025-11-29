#include<stdio.h>
int main(){
    int num1,num2,result;
    char ch;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&ch);
    printf("enter the value of a and b:\n");
    scanf("%d%d",&num1,&num2);

    if(ch == '+') {
        result = num1+num2;
        printf("%d + %d = %d",num1,num2,result);
        }
        else if(ch =='-'){
            result = num1-num2;
            printf("%d -  %d =%d",num1,num2,result);   
            }
            else if(ch =='*'){
            result = num1*num2;
            printf("%d *%d =%d",num1,num2,result);   
            }
            else if(ch =='/'){
                if(num2==0){
                    printf("input is not valid ! so please enter valid input:\n");
                    scanf("%d",&num2);
                }
            result = num1/num2;
            printf("%d -  %d =%d",num1,num2,result);   
            }
            else("invalid input");
            return 0;



}
