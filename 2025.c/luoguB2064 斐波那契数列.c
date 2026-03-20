#include<stdio.h>

int fin(int n){
    if(n==1||n==2){
        return 1;
    }else if(n>2){
        return fin(n-1)+fin(n-2);
    }
}

int main(){
    int num = 0;
    scanf("%d",&num);
    int arr[30] = {0};
    int i = 0;
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        int ret = fin(arr[i]);
        printf("%d\n",ret);
    }
    return 0;
}