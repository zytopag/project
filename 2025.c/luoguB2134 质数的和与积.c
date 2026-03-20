/*
两个质数的和是 S，它们的积最大是多少？
*/

#include<stdio.h>
#include<math.h>

int is_Prime(int n){
    if(n == 1)
        return 0;
    if(n == 2||n == 3)
        return 1;
    if(n%2==0||n%3==0)
        return 0;
    for(int i = 5;i<=sqrt(n);i+=6){
        if(n%i==0||n%(i+2)==0)
            return 0;
    }
    return 1;
}

int main(){

    int sum;
    scanf("%d",&sum);

    int a,max = 0;
    for(a=1;a<=sum;a++){
        int b = sum - a;
        if(!is_Prime(a)||!is_Prime(b)){
            continue;
        }
        if(max<(a*b))
            max = a*b;
    }
    printf("%d",max);

    return 0;
}