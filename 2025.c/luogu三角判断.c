#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ret = 0;
    if(a+b>c&&a+c>b&&b+c>a){
        ret = 1;
    }else{
        ret = 0;
    }
    printf("%d",ret);

    return 0;
}