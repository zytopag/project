//十进制转二进制


#include<stdio.h>

void printBinary(int n){
    if(n > 1){
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main(){
    int n;
    scanf("%d", &n);
    
    if(n == 0){
        printf("0");
    }else{
        printBinary(n);
    }
    
    return 0;
}