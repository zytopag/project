/*
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密。我们给出一种最简单的加密方法，对给定的一个字符串，把其中从 a∼y，A∼Y 的字母用其后继字母替代，把 z 和 Z 用 a 和 A 替代，其他非字母字符不变。请根据该加密规则将输入的密码进行解密。

提示：这里需要进行解密操作，而不是加密。
输入 ：
Ifmmp !  Ipx  bsf  zpv!
输出 ：
Hello !  How  are  you!
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[10005];
    fgets(s, 10005, stdin);
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'b' && s[i] <= 'z') {
            s[i] = s[i] - 1;
        } else if (s[i] >= 'B' && s[i] <= 'Z') {
            s[i] = s[i] - 1;
        } else if (s[i] == 'a') {
            s[i] = 'z';
        } else if (s[i] == 'A') {
            s[i] = 'Z';
        }
    }
    
    printf("%s", s);
    return 0;
}