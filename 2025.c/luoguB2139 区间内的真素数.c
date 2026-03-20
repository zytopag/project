/*
找出正整数 M 和 N 之间（N 不小于 M）的所有真素数。

真素数的定义：如果一个正整数 P 为素数，且其反序也为素数，那么 P 就为真素数。

例如，11，13 均为真素数，因为 11 的反序还是为 11，13 的反序为 31 也为素数。
*/


#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int reverse(int n){

    int sum = 0;
    while(n){
        sum = sum*10+(n%10);
        n/=10;
    }
    return sum;
    
}

bool is_Prime(int n){
    if(n==1)
        return false;
    if(n<=3)
        return true;
    if(n%3 == 0||n%2 == 0)
        return false;
    for(int i = 5;i <= sqrt(n);i+=6){
        if(n%i == 0||n%(i+2) == 0){
            return false;
        }
    }
    return true;
}

bool is_real_Prime(int n){
    if(is_Prime(n)){
        int ret = reverse(n);
        if(is_Prime(ret)){
            return true;
        }
    }
    return false;
}

int main(){

    int n,m;
    scanf("%d %d",&m,&n);

    
    int i,count = 0;
    for(i = m;i<=n;i++){
        
        if(is_real_Prime(i)){
            if(count>0){
                printf(",");
            }
            printf("%d",i);
            count++;
        }
    }
    if(!count){
        printf("No");
    }


    return 0;
}