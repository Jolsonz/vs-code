#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin>>n){
        string s;
        while(n!=0){
            s=to_string(n%8)+s;
            n/=8;
        }
        cout<<s<<endl;
    }
    return 0;
}