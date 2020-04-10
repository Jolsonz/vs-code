#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    while(cin>>n){
        m=n*n;
        if(n<=10) k=10;
        else if(n<=100) k=100;
        if(m%k ==n)
            cout<<"Yes!\n";
        else cout<<"No!\n";
    }
    return 0;
}
