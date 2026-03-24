/*
输入一行单词序列，相邻单词之间由 1 个或多个空格间隔，请对应地计算各个单词的长度。

注意：如果有标点符号（如连字符，逗号），标点符号算作与之相连的词的一部分。没有被空格间开的符号串，都算作单词。
输入 ：
She was born in 1990-01-02  and  from Beijing city.

输出 ：
3,3,4,2,10,3,4,7,5
*/

#include<stdio.h>
#include<string.h>

int main(){

    char s[1000];
    int arr[300];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';

    char* sep = " ";
    char*ret = NULL;
    ret = strtok(s,sep);
    int i = 0;
    while(ret!=NULL){
        arr[i++] = strlen(ret);
        ret = strtok(NULL,sep);
    }
    
    for(int j=0;j<i-1;j++){
        printf("%d,",arr[j]);
    }
    printf("%d",arr[i-1]);

    return 0;
}