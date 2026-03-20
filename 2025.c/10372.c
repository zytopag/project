#include <stdio.h>

void cheng(int A[3][4],int B[4][2],int C[3][2]){
    
    for(int i=0;i<3;i++){
        for(int j = 0;j<2;j++){
            C[i][j]=0;
            for(int k = 0;k<4;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    
}

int main(){
    
    int arr1[3][4],arr2[4][2],arr3[3][2];
    printf("Input matrix A(3*4):\n");
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Input matrix B(4*2):\n");
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
    cheng(arr1,arr2,arr3);
    
	printf("C=A*B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%7d",arr3[i][j]);
        }
        printf("\n");
    }
	return 0;
}