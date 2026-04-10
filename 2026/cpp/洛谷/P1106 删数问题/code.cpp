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