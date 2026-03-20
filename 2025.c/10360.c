#include<stdio.h>
//统计学生名字，成绩和平均分，输出表格
int main(){
    
    int n = 0;
    printf("Input number of the students:");
    scanf("%d",&n);
    
    printf("Input student data:\n");
    char number_name[20][20];
    int number_score[20][3];
    int avg[20] = {0};
    int total[3] = {0};
    int total_avg = 0;
    
    
    int i = 0;
    int j = 0;
    while(i<n){
        
        printf("-%d- Name:",i+1);
        scanf("%s",number_name[i]);
        
        printf("-%d- 3 scores:",i+1);
        int sum = 0;
        for(j=0;j<3;j++){
            scanf("%d",&number_score[i][j]);
            sum+=number_score[i][j];
            total[j]+=number_score[i][j];
        }
        avg[i] = sum/3;
        total_avg += avg[i];
        i++;
    }
    
    printf("\n Name Chi. Mat. Eng. Avg.\n");

    for(i=0;i<n;i++){
        printf("  %s ",number_name[i]);
        for(j=0;j<3;j++){
            printf("%4d ",number_score[i][j]);
        }
        printf("%4d\n",avg[i]);
    }
    printf("Total");
    for(i=0;i<3;i++){
        printf("%5d",total[i]/n);
    }
    printf("%5d",total_avg/n);//sometimes you need to round,somtimes you don't.stupid platform.
    
    return 0;
}