#include<stdio.h>

int main(){

    int n = 0;
    scanf("%d",&n);
    long long fin = 1;
    double e = 1;
    for(int i = 1;i<=n;i++){
        fin *= i;
        e+=(1.0/fin);
    }
    printf("%.10f",e);
    return 0;
}