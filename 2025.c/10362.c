#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Input a string:");
    fgets(str,sizeof(str),stdin);
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int len = strlen(str);
    char* pstr =str;
    while(*pstr!='\0'){
        if(*pstr=='\n'){
            pstr++;
            continue;
        }
        if(*pstr == ' '||*pstr =='\t')
            a++;
        else if(*pstr<='9'&&*pstr>='0')
            b++;
        else if((*pstr>=65&&*pstr<=90)||(*pstr>=97&&*pstr<=122))
            c++;
        else{
            d++;
        }
        pstr++;
    }
    printf("char:%d,digit:%d,blank:%d,other:%d",c,b,a,d);
    return 0;
}