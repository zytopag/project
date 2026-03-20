/*
在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，求考第 k 名学生的学号和成绩。
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct stu{
    long long num;
    float score;
}StuInf;

int cmp(const void* e1,const void* e2){
    StuInf* s1 = (StuInf*)e1;
    StuInf* s2 = (StuInf*)e2;
    if(s2->score > s1->score)
        return 1;
    else if(s2->score < s1->score)
        return -1;
    else
        return 0;
}

int main(){

    int n,k;
    scanf("%d %d",&n,&k);

    StuInf date[n];
    int i;
    for(i = 0;i < n;i++){
        scanf("%lld %f",&date[i].num,&date[i].score);
    }
    qsort(date,n,sizeof(StuInf),cmp);
    printf("%lld %g",date[k-1].num,date[k-1].score);


    return 0;
}