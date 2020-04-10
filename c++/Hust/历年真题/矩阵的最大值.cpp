// 这题也没啥意义
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    while (cin>>m>>n){
        int ans[m][n];
        for(int i=0;i<m;i++){//每一行都要一个max
            int max=-10000,sum=0;
            int maxNumber;//记录最大值的下标。
            for(int j=0;j<n;j++){
                cin>>ans[i][j];
                sum+=ans[i][j];
                if(ans[i][j]>max){
                    max=ans[i][j];
                    maxNumber=j;
                }
            }
            ans[i][maxNumber]=sum;//换掉
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout<<ans[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}