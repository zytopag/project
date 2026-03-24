/*
一个以 . 结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式，求句子中的最长单词。
*/


#include<stdio.h>
#include<string.h>

int main(){

    char s[500];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';
    
    char sep[3] = {' ','.'};
    char* temp = strtok(s,sep);
    int len,max = 0;
    char* max_word = NULL;
    while(temp!=NULL){
        len = strlen(temp);
        if(len > max){
            max = len;
            max_word = temp;
        }
        temp = strtok(NULL,sep);
    }
    printf("%s",max_word);

    return 0;
}