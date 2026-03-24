//求 X，Y 之间的素数个数（包括 X 和 Y）
//1≤X,Y≤1.1×10^6 


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1100000  // 1.1 × 10^6

bool isPrime[MAX + 1];

// 埃拉托斯特尼筛法
void sieve() {
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    // 确保 x <= y
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    sieve();  // 预计算所有素数
    
    int count = 0;
    for (int i = x; i <= y; i++) {
        if (isPrime[i]) {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}