/*
给定一个 5×5 的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值
*/


#include<stdio.h>

int main(){

    int arr[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int found = 0;
    int k = 0;
    while(k<5){
        int max = arr[k][0];
        int max_col = 0;
        for(i=1;i<5;i++){
            if(arr[k][i]>max){
                max = arr[k][i];
                max_col = i;
            }
        }
        
        int flag = 1;
        for(i=0;i<5;i++){
            if(arr[i][max_col]< max ){
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("%d %d %d",k+1,max_col+1,max);
            found = 1;
        }
        k++;
   }
    if(!found){
        printf("not found");
    }
    
    return 0;
}