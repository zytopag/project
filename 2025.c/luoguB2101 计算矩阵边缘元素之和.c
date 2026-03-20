/*
输入一个整数矩阵，计算位于矩阵边缘的元素之和。

所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。
*/

#include<stdio.h>

int main(){

    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==0||j==0||i==row-1||j==col-1){
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}