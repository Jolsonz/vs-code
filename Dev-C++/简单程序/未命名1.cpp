// ��Ӳ�Ǽǵ�����PTA��д������������
// ÿ��������һ�����������ұ�֤������ǰ׺��
// ��֤��������̫����
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
    cmp(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}
