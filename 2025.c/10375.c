#include<stdio.h>
#include<string.h>

int stoi(char s[], int n) {
    if (n == 0) {
        return 0;
    }
    
    // 递归计算前n-1个字符的值
    int smaller_value = stoi(s, n - 1);
    
    // 当前数字字符转换为数字
    int current_digit = s[n - 1] - '0';
    
    // 合并结果
    return smaller_value * 10 + current_digit;
}

int main() {
    char str[50];
    printf("Input a string:");
    scanf("%s", str);
    
    int len = strlen(str);
    int num = 0;
    
    // 处理负号
    if (str[0] == '-') {
        num = -stoi(str + 1, len - 1);  // 跳过负号，长度减1
    } else {
        num = stoi(str, len);
    }
    
    printf("Int:%d", num);
    return 0;
}