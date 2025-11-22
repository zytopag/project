#include<stdio.h>

int main(){
    float fee[]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    int sz = sizeof(fee)/sizeof(fee[0]);
    int arr[sz];
    float sum = 0;
    for(int i =1;i<sz;i++){
        scanf("%d",&arr[i]);
        sum+=(arr[i]*fee[i]);
    }
    printf("%.1f",sum);
    
    return 0;
}