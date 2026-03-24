/*
经过研究，小英发现了如下加密规律（括号中是一个“原文 → 密文”的例子）

原文中所有的字符都在字母表中被循环左移了三个位置（bcd→yza）

逆序存储（abcd→dcba）

大小写反转（abXY→ABxy）

现在给出一个加密的字符串，请你将其解密。
输入 
GSOOWFASOq

输出 
Trvdizrrvj

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Shift_right(char s[],int len){
    int i;
    for(i=0;i<len;i++){
        if(islower(s[i])){
            if(s[i]>='a'&&s[i]<'x'){
                s[i]+=3;
            }else{
                s[i] = s[i] - 23;
            }
        }else if(isupper(s[i])){
            if(s[i]>='A'&&s[i]<'X'){
                s[i]+=3;
            }else{
                s[i] = s[i] - 23;
            }
        }
    }
}
void reverse_sort(char s[],int len){
    int left = 0;
    int right = len - 1;
    while(left<right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(){

    char s[50];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);

    //大小写反转
    for(int i=0;i<len;i++){
        if(islower(s[i])){
            s[i]=toupper(s[i]);
        }else if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
    }
    
    //逆序
    reverse_sort(s,len);
    
    //右移3
    Shift_right(s,len);
    
    printf("%s",s);
        
    return 0;
}