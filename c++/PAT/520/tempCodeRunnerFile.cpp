#include<bits/stdc++.h>
using namespace std;
// 肯定不能求阶乘吧。N是10^7

long long fabricate(long long n){
    if(n<=1) return 1;
    return n*fabricate(n-1);
}
int main() {
    long long n;
    int k;
    cin>>n>>k;
    stirng ans=to_string(fabricate(n));
    auto it=ans.rbegin();
    int z=0;
    while(*it=='0'){
        z++;
        it++;
    }
    string f=ans.substr(it+k,it);
    cout<<ans<<' '<<z;
    return 0;
}