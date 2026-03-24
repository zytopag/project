#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i,num[101]={0};
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        num[arr[i]]++;
        if(num[arr[i]]<2){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}