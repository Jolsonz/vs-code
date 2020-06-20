#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="hello";
    cout<<&s<<endl;
    s[2]='E';
    cout<<&s<<endl;
    s = "stupid";
    cout<<&s<<endl;
    return 0;
}