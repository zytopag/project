/*
编程求 2∼n（n 为大于等于 2 的正整数）中有多少个素数。
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool is_Prime(int n){

    if(n <= 3)
        return true;
    if(n%2 == 0|| n%3 == 0)
        return false;

    for(int i = 5; i <= sqrt(n);i+=6){
        if(n%i == 0|| n%(i+2) == 0){
            return false;
        }
    }
    return true;
    
}

int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i = 2;i<=n;i++){
        if(is_Prime(i)){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}