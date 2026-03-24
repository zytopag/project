/*
输入一个长度为 n 的非递减正整数数列，然后进行 m 次询问。对于每次询问，给出一个整数 q，要求输出这个数字在序列中最后一次出现的下标。如果序列中不包含该数字，请输出 −1 。
*/


#include<stdio.h>

int binary_search(int arr[],int n,int q){
    int left = 0,right = n - 1,index = -1;
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid] < q){
            left = mid + 1;
        }else if(arr[mid] > q){
            right = mid - 1;
        }else{
            index = mid;
            left = mid + 1;
        }
    }
    return index;
}

int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n],i,j;
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i = 0;i < m;i++){
        int q;
        scanf("%d",&q);

        int ret = binary_search(arr,n,q);
        if (ret == -1) {
            printf("-1\n");
        } else {
            printf("%d\n", ret + 1);
        }
    }

    return 0;
}