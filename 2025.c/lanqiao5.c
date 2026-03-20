/*
输入
3
 xiaowang
 xiaoA
 xiaoli
输出
xiaowang xiaoA xiaoli
 xiaowang xiaoli xiaoA
 xiaoA xiaowang xiaoli
 xiaoA xiaoli xiaowang
 xiaoli xiaowang xiaoA
 xiaoli xiaoA xiaowan

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 10
#define MAX_NAME_LEN 100

// 交换两个字符串
void swap(char *a, char *b) {
    char temp[MAX_NAME_LEN];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// 字符串比较函数
int compare(const char *a, const char *b) {
    return strcmp(a, b);
}

// 字符串数组排序（冒泡排序）
void sort_strings(char names[][MAX_NAME_LEN], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                swap(names[j], names[j + 1]);
            }
        }
    }
}

// 生成下一个排列
int next_permutation(char names[][MAX_NAME_LEN], int n) {
    // 找到第一个递减的位置
    int i = n - 2;
    while (i >= 0 && strcmp(names[i], names[i + 1]) >= 0) {
        i--;
    }
    
    if (i < 0) {
        return 0; // 没有下一个排列
    }
    
    // 找到比 names[i] 大的最小元素
    int j = n - 1;
    while (strcmp(names[j], names[i]) <= 0) {
        j--;
    }
    
    // 交换
    swap(names[i], names[j]);
    
    // 反转 i+1 到末尾
    int left = i + 1, right = n - 1;
    while (left < right) {
        swap(names[left], names[right]);
        left++;
        right--;
    }
    
    return 1; // 还有下一个排列
}

// 打印当前排列
void print_permutation(char names[][MAX_NAME_LEN], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s", names[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    
    char names[MAX_N][MAX_NAME_LEN];
    
    // 读取名字
    for (int i = 0; i < N; i++) {
        scanf("%s", names[i]);
    }
    
    // 按字典序排序
    sort_strings(names, N);
    
    // 输出所有排列
    do {
        print_permutation(names, N);
    } while (next_permutation(names, N));
    
    return 0;
}
