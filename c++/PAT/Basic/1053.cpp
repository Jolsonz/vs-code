// 1053 住房空置率 (20分)
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    double e;
    double ans1,ans2;
    cin>>n>>e>>d;
    for(int j=0;j<n;j++)
    {
        int num,count=0;//t用于暂时输入数据,count记录低于e的次数
        double t;
        cin>>num;//观察的天数
        for(int i=0;i<num;i++){
            cin>>t;
            if(t<e) count++;
        }
        if(count>num/2){
            if(num>d) ans2++;
            else ans1++;
        }
    }
    ans1=100*ans1/n;
    ans2=100*ans2/n;
    printf("%.1f%% %.1f%%",ans1,ans2);
    //写成printf("%.1f\% %.1f\%",ans1,ans2); 不行，要转义%还是用%。
    return 0;
}