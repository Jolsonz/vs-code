// 最长不下降子序列,注意可以不连续。
// 我大概懂了，不过这东西挺难想的
#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N],dp[N];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//输入元素
        cin>>a[i];
    int ans=0;//初始长度为0
    for(int i=0;i<n;i++){//按顺序计算dp[i]
        dp[i]=1;//边界条件
        for(int j=0;j<i;j++){
            if(a[i]>=a[j] && (dp[j]+1>dp[i])){
                dp[i]=dp[j]+1;//状态转移方程
            }
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}