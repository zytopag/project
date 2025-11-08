#include<stdio.h>
#include<math.h>

double my_pow(double x,long n){
    
    int i = 0;
    double product = 1;
    for(i=0;i<n;i++){
        
        product = product*x;
        
    }
    return product;
}



double fn(double x,double eps){
  
    long i = 1;
    double ret = 1;
    int s = 1;
    long n =1;
    for(i=1,n=1,s=1;;i++,s=-s,n*=i){
        
        double current_precision = my_pow(x,i)/n;
        if(current_precision<eps)
            return ret;
        double current = s*current_precision;
        ret+=current;
        
    }
    return ret;
  
}

int main(){
    
    double x = 0;
    double eps = 1e-8;
    printf("Input x:");
    scanf("%lf",&x);
    double final = fn(x,eps);
    printf("1+x-x^2/2!+..+(-1)^(n+1)*x^n/n!=%lf",final);
    
    return 0;
}