// 1066 图像过滤 (15分)
// 这也没啥好说的，模拟就完了，输出的时候检查一下，满足条件就替换
#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,f1,f2,k;//[f1,f2]内的都换成k;
    cin>>m>>n>>f1>>f2>>k;
    int a[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                if(a[i][j]>=f1&&a[i][j]<=f2) printf("%03d",k);
                else printf("%03d",a[i][j]);
                continue;
            } 
            if(a[i][j]>=f1&&a[i][j]<=f2) printf(" %03d",k);
            else printf(" %03d",a[i][j]);
        }
        cout<<endl;
    }
    return 0;
}