/*
监护室每小时测量一次病人的血压，若收缩压在 90∼140 之间并且舒张压在 60∼90 之间(包含端点值)则称之为正常，现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。

第一行为一个正整数 n(n<100)，其后有 n 行，每行 2 个正整数，分别为一次测量的收缩压和舒张压。

输出仅一行，血压连续正常的最长小时数。
*/

#include<stdio.h>

typedef struct blood_press{
    int high;
    int low;
}blood_press;

int main(){

    int n;
    scanf("%d",&n);

    blood_press patient[n];
    int count = 0;
    int max = 0;
    for(int i = 0;i<n;i++){
        scanf("%d %d",&patient[i].high,&patient[i].low);
        if(patient[i].high<=140&&patient[i].high>=90&&patient[i].low<=90&&patient[i].low>=60){
            count++;
        }else{
            if(max<count){
                max = count;
            }
            count = 0;
        }
    }
    if(max<count){
        max = count;
    }
    printf("%d",max);

    return 0;
}