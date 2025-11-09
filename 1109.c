#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num = 0;
    int arr[20] = { 0 };
    printf("Input number of the students:");
    scanf("%d", &num);
    printf("Input the scores(%d):\n", num);

    int i = 0;
    for (i = 0;i < num;i++) {

        scanf("%d", &arr[i]);

    }

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    for (i = 0;i < num;i++) {

        if (arr[i] <= 100 && arr[i] >= 90) {
            a++;
        }
        else if (arr[i] <= 89 && arr[i] >= 80) {
            b++;
        }
        else if (arr[i] <= 79 && arr[i] >= 70) {
            c++;
        }
        else if (arr[i] <= 69 && arr[i] > 60) {
            d++;
        }
        else {
            e++;
        }

    }
    printf("A(90~100):%d\n", a);
    printf("B(80~89):%d\n", b);
    printf("C(70~79):%d\n", c);
    printf("D(60~69):%d\n", d);
    printf("E(<60):%d\n", e);
    printf("Total:%d", num);


    /* 
    //第二种写法，上面写法太挫了
    int high_score = 100;
    int low_score = 90;
    char ch = 'A';
    while(low_score>=60){

        int count = 0;

        for(i=0;i<num;i++){

            if(arr[i]<=high_score&&arr[i]>=low_score){
                count++;
            }

        }

        printf("%c(%d~%d):%d\n",ch,low_score,high_score,count);
        ch++;
        high_score=low_score-1;
        low_score-=10;
    }

    int count2 = 0;

    for(i=0;i<num;i++){

        if(arr[i]<60){
            count2++;
        }
    }
    printf("E(<60):%d\n",count2);

    printf("Total:%d",num);
    */
    return 0;
}