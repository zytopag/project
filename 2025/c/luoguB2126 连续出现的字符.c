/*
给定一个字符串，在字符串中寻找第一个连续出现次数不低于 k 次的字符。

输入：
3
abcccaaab

输出 ：
c

*/

#include<stdio.h>
#include<string.h>

int main(){

    int n = 0;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);

    int len = strlen(s);
    int count = 1,flag = 0;
    for(int i = 1;i<len;i++){
        if(s[i] == s[i-1]){
            count++;
            if(count >= n){
                printf("%c",s[i]);
                flag = 1;
                break;
            }
        }else{
            count = 1;
        }
    }
    if(!flag){
        printf("No");
    }

    return 0;
}