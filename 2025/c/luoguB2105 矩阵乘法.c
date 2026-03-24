/*
计算两个矩阵的乘法。n×m 阶的矩阵 A 乘以 m×k 阶的矩阵 B 得到的矩阵 C 是 n×k 阶的，且 C[i][j]=A[i][0]×B[0][j]+A[i][1]×B[1][j]+ …… +A[i][m−1]×B[m−1][j](C[i][j] 表示 C 矩阵中第 i 行第 j 列元素）。
*/


#include<stdio.h>

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int arr1[n][m],arr2[m][k],i,j,l;
    int arr3[n][k];
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            arr3[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<k;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            for(l=0;l<m;l++){
                 arr3[i][j]+=arr1[i][l]*arr2[l][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}