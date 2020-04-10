#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,m;
    while(getline(cin,s)){
        m=s;
        reverse(s.begin(),s.end());
        if(s==m) cout<<"Yes!\n";
        else cout<<"No!\n";
    }
    return 0;
}