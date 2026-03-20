#include<stdio.h>

struct employee{
    
    int num;
    char name[20];
    int year;
    char sex;
    char position[20];
    int wage;
    
};

int main(){
    
    int n = 0;
    printf("Input the number of employee:");
    scanf("%d",&n);
    printf("Input %d employee information(num name workYear sex position wage):",n);
    
    struct employee staff[n];
    int i = 0;
    int sum = 0;
    for(i=0;i<n;i++){
        scanf("%d %s %d %c %s %d\n",&staff[i].num,staff[i].name,&staff[i].year,&staff[i].sex,staff[i].position,&staff[i].wage);
        
        sum += staff[i].wage;
    }
    
    printf("\naverage wage is: %d",sum/n);
    
    return 0;
}