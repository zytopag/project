#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct cop{
    int start;
    int end;
};

int main(){

    int n;
    cin>>n;
    vector<cop>cops(n);
    for(auto& it : cops){
        cin>>it.start>>it.end;
    }
   sort(cops.begin(), cops.end(), [](const cop& a, const cop& b){
        return a.end < b.end; 
    });
    
    int count = 0;
    int last_end = -1;
    
    for(auto& it : cops){
        if(it.start>=last_end){
            count++;
            last_end = it.end;
        }
    }
    
    cout << count << endl;

    return 0;
}