// 参考
// 他也是用的刘佳如的那个解法
#include<bits/stdc++.h>
using namespace std; 
int a[10000][1000]={0},s[10000]; 
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n,i,j,x,y,r,c,tot,minn=9999;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&s[i]);
    sort(s,s+n,cmp);//逆序
    for(i=1;i<=sqrt(n*1.0);i++){
        if(n%i==0){
            if(n/i-i<minn){
                minn=n/i-i;
                r=i;
            }
        }        
    }
    c=n/r;//c>r c行r列 
    a[1][1]=s[0];
    tot=0;
	x=y=1;
    while(tot < r * c-1){
        while(y + 1 <= r && ! a[x][y + 1])
            a[x][++y] = s[++tot];
        while(x + 1 <= c && !a[x + 1][y])
            a[++x][y] = s[++tot];
        while(y - 1 > 0 && !a[x][y - 1])
            a[x][--y] = s[++tot];
        while(x - 1 > 0 && !a[x - 1][y])
            a[--x][y] = s[++tot];   
    }
    for(i=1;i<=c;i++){
        printf("%d",a[i][1]);
        for(j=2;j<=r;j++) printf(" %d",a[i][j]);
        printf("\n");
    }
    return 0;
}