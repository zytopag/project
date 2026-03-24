/*
输入 1 行句子（不多于 200 个单词，每个单词长度不超过 100)，只包含字母、空格、逗号和句号。单词由至少一个连续的字母构成，空格、逗号和句号都是单词间的间隔。

输出第 1 个最长的单词和第 1 个最短单词。
输入 ：
I am a student,i am studying Programming language C in Peking University.

输出：
Programming
I

*/

#include<stdio.h>
#include<string.h>

int main(){
    char s[20000];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';

    char sep[] = " ,.";
    char* ret = strtok(s,sep);
    char* max = ret;
    char* min = ret;
    int max_len = strlen(max);
    int min_len = strlen(min);
    
    while((ret =strtok(NULL,sep))!=NULL){
        int len = strlen(ret);
        if(len>max_len){
            max = ret;
            max_len = len;
        }
        if(len<min_len){
            min = ret;
            min_len = len;
        }
    }
    printf("%s\n%s",max,min);
    
    return 0;
}