// 这个阶乘算是变种吧，打表做。
#include<bits/stdc++.h>
using namespace std;
int ans[10000];//存每个值的阶乘
int main() {
    int n,m,p;//m是小于等于n的最大奇数，p是偶数
    cin>>n;
    if(n%2) m=n,p=n-1;//n是奇数
    else p=n,m=n-1;
    // 直接把1的阶乘到n的阶乘都算出来，存在表里，不然每次都算一遍就太麻烦了， 容易超时。
    ans[1]=1;
    for(int i=2;i<=n;i++) ans[i]=ans[i-1]*i;//填阶乘。
    int y1=0,y2=0;
    for(int i=1;i<=m;i+=2) y1+=ans[i];
    for(int i=2;i<=p;i+=2) y2+=ans[i];
    cout<<y1<<' '<<y2<<endl;
    return 0;
}