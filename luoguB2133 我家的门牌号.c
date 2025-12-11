/*
我家住在一条短胡同里，这条胡同的门牌号从 1 开始顺序编号。
若其余各家的门牌号之和减去我家门牌号的两倍，恰好等于 n，求我家的门牌号及总共有多少家。数据保证有唯一解。

输入：
100

输出：
12 16

*/

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int k;
    for(k = 1;;k++){
        int s = k*(k+1)/2;
        if(s<=n) continue;

        if((s-n)%3!=0) continue;
        int m = (s-n)/3;

        if(m>=1&&m<=k){
            printf("%d %d",m,k);
            break;
        }
    }
    return 0;
}