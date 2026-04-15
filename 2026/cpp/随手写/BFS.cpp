#include<iostream>
using namespace std;

int n,m;
int a[101][101] ={0};
int p[101][4];
int head = 1;
int tail = 1;

void Print(int x){
    if(p[x][3]!=0){
        Print(p[x][3]);
    }
    cout<<"("<<p[x][1]<<" "<<p[x][2]<<")"<<" ";
}

int main(){
    cin>>n>>m;
    int dx[5] = {0,0,1,0,-1};
    int dy[5] = {0,1,0,-1,0};
    int tx = 0;
    int ty = 0;
    int k = 1;
    p[1][1] = 1;
    p[1][2] = 1;
    p[1][3] = 0; 
    a[1][1] = 1;
    while(head<=tail){
        
        for(int i = 1;i<=4;i++){
            tx = p[head][1] + dx[i];
            ty = p[head][2] + dy[i];
            if(tx>=1 && ty<=m && ty>=1 && tx<=n && a[tx][ty] == 0){
                a[tx][ty] = k + 1;
                k++;
                tail++;
                p[tail][1] = tx;
                p[tail][2] = ty;
                p[tail][3] = head;
                if(tx == n&& ty == m){
                    cout<<"The shortest path is:";
                    Print(tail);
                }
            }
        }
        head++;
    }

    cout<<endl;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}