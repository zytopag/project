#include<stdio.h>

int main(){
    int num1,num2,ret;
    char ch;
    scanf("%d %d %c",&num1,&num2,&ch);
    switch(ch){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            if(num2!=0){
                printf("%d",num1/num2);
               }else{
                printf("Divided by zero!");
               }
             break;
        default:
             printf("Invalid operator!");
             break;
    }
    return 0;
}