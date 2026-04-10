#include<iostream>
#include<iomanip>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>times(n+1);
    //输入时间
    for(int i = 1;i<n+1;i++){
        cin>>times[i];
    }
    //初始化放1~n+1
    vector<int>ids(n+1);
    iota(ids.begin()+1,ids.end(),1);
    //排序
    sort(ids.begin()+1,ids.end(),[&times](const int& a,const int&b){
       return times[a] < times[b]; 
    });
    sort(times.begin()+1,times.end());
    //输出排序（小->大）
    for(int i = 1; i <= n; i++){
        cout << ids[i] << " ";
    }
    cout<<endl;
    //输出平均时间
    double sum_wait = 0;
    double curr_wait = 0;
    for(int i = 1; i <= n; i++){
        sum_wait += curr_wait;
        curr_wait += times[i];
    }
    cout<<fixed<<setprecision(2)<<sum_wait/n;
    
    return 0;
}
