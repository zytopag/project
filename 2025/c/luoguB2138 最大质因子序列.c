//任意输入两个正整数 m,n（2≤m≤n≤5000），依次输出 m 到 n 之间每个数的最大质因子（包括 m 和 n；如果某个数本身是质数，则输出这个数自身）。


#include<stdio.h>
#include<math.h>

int is_Prime(int n){
    if(n==1)
        return 0;
    if(n==2||n==3)
        return 1;
    if(n%2==0||n%3==0)
        return 0;
    for(int i = 5;i<=sqrt(n);i++){
        if(n%i==0||n%(i+2)==0)
            return 0;
    }
    return 1;
}

int main(){

    int m,n;
    scanf("%d %d",&m,&n);

    int i,j;
    for(i = m;i<=n;i++){
        int max_Prime = 0;
        for(j = 1;j<=i;j++){
            if(i%j == 0){
                if(is_Prime(j)){
                    if(max_Prime<j){
                        max_Prime = j;
                    }
                }
            }
        }
        printf("%d",max_Prime);
        if(i!=n){
            printf(",");
        }
    }
    
    return 0;
}
