/*
# P1106 删数问题

## 题目描述

键盘输入一个高精度的正整数 $n$（不超过 $250$ 位），去掉其中任意 $k$ 个数字后剩下的数字按原左右次序将组成一个新的非负整数。编程对给定的 $n$ 和 $k$，寻找一种方案使得剩下的数字组成的新数最小。

## 输入格式

输入两行正整数。

第一行输入一个高精度的正整数 $n$。

第二行输入一个正整数 $k$，表示需要删除的数字个数。

## 输出格式

输出一个整数，最后剩下的最小数。

## 输入输出样例 #1

### 输入 #1

```
175438 
4

```

### 输出 #1

```
13
```

## 说明/提示

用 $\operatorname{len}(n)$ 表示 $n$ 的**位数**，保证 $1 \leq k < \operatorname{len}(n) \leq 250$。

**注意：去掉若干数字后剩下的数可以存在前导零，而输出时不要输出前导零。**

*/


#include<iostream>
#include<string>
using namespace std;

int main(){

    string n;
    int k;
    cin>>n>>k;
    
    string ret = "";
    for(char c : n){
        if(ret.empty()){
            ret.push_back(c);
            continue;
        }
        while(k > 0 && ret.back() > c){
            ret.pop_back();
            k--;
        }
        ret.push_back(c);
    }
    //还有剩余删数，退栈顶
    while(k>0){
        ret.pop_back();
        k--;
    }
    //有前导0
    int i = 0;
    while(i < ret.size() && ret[i] == '0'){
        i++;
    }

    if(i == ret.size()){
        cout<<"0";
    }else{
        cout<<ret.substr(i);
    }
    
    return 0;
}