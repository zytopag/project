/*
小明同学写单词的时候喜欢反着写，比如 hello 他会写成 olleh。给出小明同学写的一个句子，请你将所有的单词复原

输入 ：
olleh dlrow

输出 ：
hello
world

*/

#include<stdio.h>
#include<string.h>

char* reverse(char* ret,int len){
    char* initial = ret;

    int left = 0;
    int right = len - 1;
    while(left<right){
        char temp = ret[left];
        ret[left] = ret[right];
        ret[right] = temp;
        left++;
        right--;
    }
    
    return initial;
}

int main(){

    char s[101];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';
    
    char* ret = strtok(s," ");
    do{
        int len = strlen(ret);
        reverse(ret,len);
        printf("%s\n",ret);
    }while((ret = strtok(NULL," "))!=NULL);
    
    return 0;
}