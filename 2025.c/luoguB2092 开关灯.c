#include<stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n+1], i, j;
    for (i = 1;i <= n;i++) {
        arr[i] = 1;
    }
    for (i = 1;i <= n;i++) {
        //遍历编号
        for (j = 1;j <= n;j++) {
            //遍历数组
            if (j % i == 0) {
                arr[j] = (-arr[j]);//reverse
            }
            
        }
    }
    for (i = 1;i <= n;i++) {
        if (arr[i] <0) {
            printf("%d ", i);
        }
    }

    return 0;
}