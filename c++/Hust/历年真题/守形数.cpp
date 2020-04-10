//这题本来想用string s=to_string(n) 的，怎么都不行。
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    while(cin>>n){
        m=n*n;
        string s = to_string(n);
        cout<<s.size()<<endl;
        if(m%int(pow(10.0,s.size()))==n)
            cout<<"Yes!\n";
        else cout<<"No!\n";
    }
    return 0;
}