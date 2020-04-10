#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.size()!=b.size()) return a.size()<b.size();
    else return a<b;//相等直接字符串比较即可
    // 我还在那儿想从a[0]b[0]一直比下去，其实字符串自己都可以实现这个功能。
}
int main() {
    int n;
    while(cin>>n){
        vector<string> ans;
        while(n--){
            string t;
            cin>>t;
            ans.push_back(t);
        }
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;
    }
    return 0;
}