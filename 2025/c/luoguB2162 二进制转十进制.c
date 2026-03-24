//二进制转十进制

#include<stdio.h>
#include<string.h>

int main(){
    char binary[32];
    scanf("%s",binary);

    int len = strlen(binary);
    int dec = 0;
    for(int i = 0;i<len;i++){
        int bit = binary[i] - '0';
        dec = dec*2 + bit; 
    }
    printf("%d",dec);
    
    return 0;
}