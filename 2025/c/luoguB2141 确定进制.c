
#include<stdio.h>

int isvalid(long long n,int base){
    while(n>0){
        if(n%10>=base){
            return 0;
        }
        n/=10;
    }
    return 1;
}

long long Convert_decimal(long long n,int i){
    long long ret = 0;
    long long power = 1;
    while(n!=0){
        ret = ret+(n%10*power);
        n/=10;
        power *= i;
    }
    return ret;
}

int main(){
    long long p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    
    int i = 1,flag = 0;
    do{
        i++;
        //判断进制是否合法
        if (!isvalid(p, i) || !isvalid(q, i) || !isvalid(r, i)) {
            // 无效，尝试下一个进制
            continue;  
        }
        
        //转化为10进制
        long long np = Convert_decimal(p,i);
        long long nq = Convert_decimal(q,i);
        long long nr = Convert_decimal(r,i);
        if(np*nq == nr){
            flag = 1;
            break;
        }
    }while(i!=16);
    
    if(flag){
        printf("%d",i);
    }else{
        printf("0");
    }
    return 0;
}