// 我硬是记得我在PTA里写过这个玩意儿的
// 每个数都是一个正数，并且保证不包含前缀零
// 保证是正数就太简单了
#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.size()!=b.size()) return a.size()<b.size();
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]>b[i]) return b.size()<a.size();
            else if(a[i]<b[i]) return a.size()<b.size();
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<string> ans;
    while(n--){
        string t;
        cin>>t;
        ans.push_back(t);
    }
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}