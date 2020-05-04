#include<bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    for(auto it=a.begin();it!=a.end();it++)
        if(*it==',') a.erase(it);
    for(auto it=b.begin();it!=b.end();it++)
        if(*it==',') b.erase(it);
    int ans=stoi(a)+stoi(b);
    cout<<ans;
    return 0;
}
