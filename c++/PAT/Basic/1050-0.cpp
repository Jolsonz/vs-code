/*
 * @Author: Jolson 
 * @Date: 2020-02-09 15:37:57 
 * @Last Modified by:   Jolson 
 * @Last Modified time: 2020-02-09 15:37:57 
 */
// 1050 螺旋矩阵 (25分)
// 这个东西在算法竞赛入门上有提及P40，我也参考了它的写法
// 这题的麻烦地方在于，对于输入的N要m*n=N ; m≥n ; 且 m−n 取所有可能值中的最小值。
// 有一点很奇怪，什么时候变量可以用于定义数组的啊，好像在DEVC++里都不行。。
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main() {
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    int n=sqrt(N),m;//只需要从N的开方处找起，n一定偏小。因为sqrt这个函数向下取整的。
    m=N/n;
    while(m*n!=N){
        m++;
        n=N/m;
    }//这样最后找的想要的m行,n列
    int b[m][n];
// 我用 b[m][n]={0};的话没有全赋0，奇怪的不行。现在不知道原因。
    memset(b,0,sizeof(b));
    sort(a,a+N,cmp);
    int x=0,y=0,tot=0;//正常的tot=1，因为b[0][0]已经赋值了
    b[0][0]=a[0];
    while(tot!=N-1){//tot=0，这里跳出条件变成N-1
        while(y+1<n && !b[x][y+1]) b[x][++y]=a[++tot];
        while(x+1<m && !b[x+1][y]) b[++x][y]=a[++tot]; 
        while(y-1>=0 && !b[x][y-1]) b[x][--y]=a[++tot]; 
        while(x-1>=0 && !b[x-1][y]) b[--x][y]=a[++tot];  
    }
    for (x=0;x<m;x++){
        cout<<b[x][0];
        for(y=1;y<n;y++)
            cout<<' '<<b[x][y];
        cout<<endl;
    }
    return 0;
}