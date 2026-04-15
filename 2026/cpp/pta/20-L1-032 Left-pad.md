# L1-032 Left-pad (**分数 20**)

### 题目描述

根据新浪微博上的消息，有一位开发者不满 NPM（Node Package Manager）的做法，收回了自己的开源代码，其中包括一个叫 left-pad 的模块，就是这个模块把 javascript 里面的 React/Babel 干瘫痪了。这是个什么样的模块？就是在字符串前填充一些东西到一定的长度。例如用 `*` 去填充字符串 `GPLT`，使之长度为 10，调用 left-pad 的结果就应该是 `******GPLT`。Node 社区曾经对 left-pad 紧急发布了一个替代，被严重吐槽。下面就请你来实现一下这个模块。

### 输入格式：

输入在第一行给出一个正整数 N (&le; 10<sup>4</sup>) 和一个字符，分别是填充结果字符串的长度和用于填充的字符，中间以 1 个空格分开。

第二行给出原始的非空字符串，以回车结束。

### 输出格式：

在一行中输出结果字符串。

### 输入样例 1:
```text
15 _
I love GPLT
```
### 输出样例 1:
```text
____I love GPLT
```
### 输入样例 1:
```text
4 *
this is a sample for cut
```
### 输出样例 1:
```text
 cut
```
<br> <br> <br> <br> <br>

## Code
```c
#include<iostream>
#include<string>
using namespace std;

int main(){
    size_t n;
    char op;
    string s1;
    cin>>n>>op;
    cin.ignore();
    getline(cin,s1);

    if(s1.size()<n){
        size_t append_size = n - s1.size();
        string s2(append_size,op);
        cout<<s2+s1;
    }else if(s1.size()==n){
        cout<<s1;
    }else{
        //s1.erase(0,s1.size()-n);
        s1 = s1.substr(s1.size()-n);
        cout<<s1;
    }

    return 0;
}

//cin之后要接getline的话，中间要补一个cin.ignore()来接受cin之后缓冲区的\n(回车)
//substr返回新的字符串(string类型),string类型没用增加或者删除front，但是可以拿保留substr替代
```