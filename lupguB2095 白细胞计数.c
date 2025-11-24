#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void*e1,const void*e2){
    return (*(double*)e1-*(double*)e2);
}

int main(){
    int n,i;
    scanf("%d",&n);
    double arr[n];
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    qsort(arr,n,sizeof(arr[0]),cmp);
    double sum = 0;
    for(i=1;i<n-1;i++){
        sum+=arr[i];
    }
    double avg = sum/(n-2);
    double eps = (fabs(arr[1]-avg)>fabs(arr[n-2]-avg)?fabs(arr[1]-avg):fabs(arr[n-2]-avg));
    printf("%.2f %.2f",avg,eps);
    return 0;
}