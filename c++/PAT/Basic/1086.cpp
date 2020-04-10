// 就不告诉你
// 简单，就是要对几个函数要知道。
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int c=a*b;
    string ans;
    ans=to_string(c);
    reverse(ans.begin(),ans.end());//有个小问题，可能倒过来之后前面有0
    c=stoi(ans);//又转成整型，这样前面的0就没了
    cout<<c;
    return 0;
}