//求 11 到 n 之间（包括 n），既是素数又是回文数的整数有多少个
//回文数指左右对称的数，如：11，12121


#include<stdio.h>
#include<math.h>

int is_reverse(int n){
    int initial = n;
    int reverse = 0;
    while(n){
        reverse = reverse*10 + n%10;
        n/=10;
    }
    if(initial == reverse){
        return 1;
    }else{
        return 0;
    }
}

int is_Prime(int n){
    if(n==2||n==3)
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

    int n;
    scanf("%d",&n);

    int count = 0;
    for(int i = 11;i<=n;i++){
        if(is_reverse(i)&&is_Prime(i)){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}