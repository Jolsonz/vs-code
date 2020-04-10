// 1068 万绿丛中一点红 (20分)
// 测试点3，5要考虑第一行，第一列，最后一行，最后一列，日你妈，题设里又没说
// 定义一个数组矩阵，初始化数据为0，从i=1,j=1开始输入数据，这样，在考虑第一行，第一列，第N行，第M列的数据的时候，他的周围八个数都能有值。就不需要特殊处理。
// 草，这里的唯一指的是在整个输入中唯一，出题人弱智吗？写的明白点啊,浪费时间，真的恶心。
#include<bits/stdc++.h>
using namespace std;
int k[20000000]={0};//这里可以用map的，就不用这么浪费空间，不过，算了，反正内存多。
int main() {
    int n,m,tol;
    cin>>n>>m>>tol;//m行n列，差值tol
    m=m+2;n=n+2;//额外多加两行两列。
    int a[m][n]={-tol};//不能写a[m+2][n+2]={-tol}
    m=m-2;n=n-2;
    for(int i=1;i<=m;i++)//可以取[1,m-2]个
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            k[a[i][j]]++;
        }
    int f=0,x,y,ans;//标志位
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(k[a[i][j]]!=1) continue;//不止一个，不考虑
            if( abs(a[i][j]-a[i+1][j])>tol && abs(a[i][j]-a[i+1][j+1])>tol && abs(a[i][j]-a[i+1][j-1])>tol && abs(a[i][j]-a[i][j+1])>tol && abs(a[i][j]-a[i][j-1])>tol && abs(a[i][j]-a[i-1][j])>tol && abs(a[i][j]-a[i-1][j+1])>tol && abs(a[i][j]-a[i-1][j-1])>tol){
                f++;
                x=j;//放列
                y=i;//放行
                ans=a[i][j];
            }
        }
    }
    if(f==0) cout<<"Not Exist";
    else if(f==1) printf("(%d, %d): %d",x,y,ans);
    else cout<<"Not Unique";
    return 0;
}