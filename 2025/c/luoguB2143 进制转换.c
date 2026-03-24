/*
用递归算法将一个十进制整数 X转换成任意进制数 M（2≤M≤16，M 为整数）

输入 ：
31 16
 
输出 ：
1F

*/


#include <stdio.h>

// 递归函数：将十进制数 n 转换为 m 进制
void convert(int n, int m) {
    // 递归基：n 为 0 时直接返回
    if (n == 0) {
        return;
    }
    
    // 先递归处理商
    convert(n / m, m);
    
    // 处理当前余数
    int remainder = n % m;
    if (remainder < 10) {
        printf("%c", '0' + remainder);  // 输出数字 0-9
    } else {
        printf("%c", 'A' + remainder - 10);  // 输出字母 A-F
    }
}

int main() {
    int X, M;
    scanf("%d %d", &X, &M);
    
    // 处理特殊情况：X 为 0
    if (X == 0) {
        printf("0\n");
        return 0;
    }
    
    // 调用递归函数
    convert(X, M);
    printf("\n");
    
    return 0;
}