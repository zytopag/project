/*
输入 n 个严格递增的正整数组成的数列，然后进行 m 次询问。对于每次询问，给出一个整数 q，要求输出这个数字在序列中出现的下标。如果序列中不包含该数字，请输出 −1 。
*/

#include<stdio.h>

int binary_search(int arr[],int n,int q){
    int left = 0,right = n - 1;
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid]<q){
            left = mid + 1;
        }else if(arr[mid]>q){
            right = mid - 1;
        }else{
            return mid + 1;
        }
    }
    return -1;
    
}

int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n],i;
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i = 0;i < m;i++){
        int q;
        scanf("%d",&q);
        int ret = binary_search(arr,n,q);
        printf("%d\n",ret);
    }

    return 0;
}