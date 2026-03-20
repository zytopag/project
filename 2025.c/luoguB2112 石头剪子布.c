/*
石头剪子布，是一种猜拳游戏。起源于中国，然后传到日本、朝鲜等地，随着亚欧贸易的不断发展它传到了欧洲，到了近现代逐渐风靡世界。简单明了的规则，使得石头剪子布没有任何规则漏洞可钻，单次玩法比拼运气，多回合玩法比拼心理博弈，使得石头剪子布这个古老的游戏同时用于“意外”与“技术”两种特性，深受世界人民喜爱。

游戏规则：石头打剪刀，布包石头，剪刀剪布。

现在，需要你写一个程序来判断石头剪子布游戏的结果。
第一行是一个整数 N，表示一共进行了 N 次游戏。1≤N≤100。

接下来 N 行的每一行包括两个字符串，表示游戏参与者 Player1，Player2 的选择（石头、剪子或者是布）： S1,S2

字符串之间以空格隔开 S1 S2 只可能取值在 Rock,Scissors,Paper (大小写敏感）中。

*/


#include<stdio.h>
#include<string.h>

int win(char* e1, char* e2) {
    if ((*e1 == 'R' && *e2 == 'S')
        || (*e1 == 'P' && *e2 == 'R')
        || (*e1 == 'S' && *e2 == 'P')) {
        return 1;
    }
    else if ((*e2 == 'R' && *e1 == 'S')
        || (*e2 == 'P' && *e1 == 'R')
        || (*e2 == 'S' && *e1 == 'P')) {
        return 2;
    }
    else {
        return 0;
    }
}

int main() {

    int n;
    scanf("%d", &n);
    getchar();
    char str1[50];
    int i = 0;
    int ret[100];
    while (n--) {
        fgets(str1, 50, stdin);
        char* player1 = strtok(str1, " ");
        char* player2 = strtok(NULL, " ");
        ret[i++] = win(player1, player2);
    }
    for (int j = 0;j < i;j++) {
        switch (ret[j]) {
            case 1:
                printf("Player1\n");
                break;
            case 2:
                printf("Player2\n");
                break;
            case 0:
                printf("Tie\n");
                break;
        }
    }
    return 0;
}