/*
输入一个字符串，以回车结束（字符串长度 ≤200）。该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。
*/

#include<stdio.h>
#include<string.h>

int main(){

    char s[200];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';
    char result[400] = ""; 

    char a_word[100],b_word[100];
    scanf("%s",a_word);
    scanf("%s",b_word);

    char* temp = strtok(s," ");
    int first = 1;
    while(temp!=NULL){
        if(!first){
            strcat(result," ");
        }else{
            first = 0;
        }

        if(strcmp(temp,a_word)==0){
            strcat(result,b_word);
        }else{
            strcat(result,temp);
        }
        temp = strtok(NULL," ");
    }
    
    printf("%s",result);
    
    return 0;
}