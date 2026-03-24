#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

struct gold{
    double weight;
    double value;
    double avg;
};

int main(){

    int n,t;
    cin>>n>>t;
    vector<gold>golds(n);
    for(int i = 0;i<n;i++){
        cin>>golds[i].weight>>golds[i].value;
        golds[i].avg = golds[i].value/golds[i].weight; 
    }
    
    sort(golds.begin(),golds.end(),[](const gold& a,const gold& b){
        return a.avg > b.avg; 
    });

    double sum = 0;
    int j = 0;
    while(t&&j<n){
        double pack_weight = 0;
        if(t>golds[j].weight){
            pack_weight = golds[j].weight;
            t = t - golds[j].weight;
        }else{
            pack_weight = t;
            t = 0;
        }
        sum += pack_weight * golds[j++].avg;
    }
    cout<<fixed<<setprecision(2)<<sum;

    return 0;
}