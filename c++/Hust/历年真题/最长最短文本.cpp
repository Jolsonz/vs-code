// 因为事先不知道要输入多少个，建议直接用Vector
#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.size()!=b.size()) return a.size()<b.size();
}
int main() {
    vector<string> ans;
    string t;
    while (getline(cin,t))
        ans.push_back(t);
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++){
        int b=ans.size()-1;
        if(ans[i].size()==ans[0].size() || ans[i].size()==ans[b].size()) 
            cout<<ans[i]<<endl;
    }
    return 0;
}