// 就硬要用to_stirng来一遍
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    while(cin>>n){
        m=n*n;
        string s = to_string(n);
        k=pow(10,s.size())+0.5;//问题在于，这玩意算10的平方能算成99，就离谱。估计是怎么截断了。
        // 这是C++11里的，auto也是。
        if(m%k==n)
            cout<<"Yes!\n";
        else cout<<"No!\n";
    }
    return 0;
}