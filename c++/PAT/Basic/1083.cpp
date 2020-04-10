// 是否存在相等的差
// 思路很简单，就是有一点，要不要开个数组存结果，稍微有点占空间。。
#include<iostream>
#include<cmath>
using namespace std;
int ans[100005]={0};
int main(){
    int n,t;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t;
        t=abs(t-i);
        ans[t]++;
    }
    for(int i=100005;i>=0;i--){
        if(ans[i]>1) cout<<i<<' '<<ans[i]<<'\n';
    }
    return 0;
}