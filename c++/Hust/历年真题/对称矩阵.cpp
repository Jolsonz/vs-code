#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    int flage=1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]!=a[j][i]) flage=0;
    if(flage) cout<<"Yes!";
    else cout<<"No!";
    return 0;
}