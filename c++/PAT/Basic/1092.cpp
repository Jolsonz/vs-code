// 最好吃的月饼，豆沙和蛋黄莲蓉的。
// 蛮简单的
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,t;//n指月饼种类
    cin>>n>>m;
    int sell[n]={0};//销量
    while(m--){
        for(int i=0;i<n;i++){
            cin>>t;
            sell[i]+=t;//加销量呗
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(sell[i]>max) max=sell[i];
    }
    cout<<max<<endl;
    for(int f=1,i=0;i<n;i++){
        if(sell[i]==max){
            if(f) {cout<<i+1;f=0;}//第一个，不要输出空格
            else cout<<' '<<i+1;
        }
    }
    return 0;
}