#include<stdio.h>
#include<math.h>

int Is_Prime(int x){
    int j;
    for(j=2;j<=sqrt(x);j++){
        if(x%j==0){
            return 0;//不是质数
        }
    }
    return 1;//质数
}

int main(){

    int n = 0;
    scanf("%d",&n);
    int ret = 1;
    while(n!=0){
        ret++;
        if(Is_Prime(ret)){
            n--;
        }
        
    }
    printf("%d",ret);

    return 0;
}