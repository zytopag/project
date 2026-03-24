/*
编写一个程序，将登记的病人按照以下原则排出看病的先后顺序：
老年人（年龄 ≥60 岁）比非老年人优先看病。
老年人按年龄从大到小的顺序看病，年龄相同的按登记的先后顺序排序。
非老年人按登记的先后顺序看病。

输入格式
第 1 行，输入一个小于 100 的正整数，表示病人的个数；

后面按照病人登记的先后顺序，每行输入一个病人的信息，包括：一个长度小于 10 的字符串表示病人的 ID（每个病人的ID各不相同且只含数字和字母），一个整数表示病人的年龄，中间用单个空格隔开。

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct PeoInf{

    char number[11];
    int age;
    int order;
    
}PeoInf;

int cmp_age(const void* e1,const void* e2){
    PeoInf *pa = (PeoInf*)e1;
    PeoInf *pb = (PeoInf*)e2;

    // 判断是否为老年人
    int is_elderly_a = (pa->age >= 60);
    int is_elderly_b = (pb->age >= 60);
    
    // 规则1: 老年人优先于非老年人
    if (is_elderly_a && !is_elderly_b) return -1;
    if (!is_elderly_a && is_elderly_b) return 1;

    // 规则2:老年人按年龄大小排序
    if(is_elderly_a && is_elderly_b){
        if (pa->age != pb->age)
            return (*pb).age - (*pa).age;
        return (*pa).order - (*pb).order;
    }

    // 规则3: 非老年人按登记顺序排序
    return pa->order - pb->order;
    
}

int main(){
    int n;
    scanf("%d",&n);
    PeoInf date[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%s %d",date[i].number,&date[i].age);
        date[i].order = i;
    }

    qsort(date,n,sizeof(PeoInf),cmp_age);

    for(i = 0;i<n;i++){
        printf("%s\n",date[i].number);
    }
    

    return 0;
}