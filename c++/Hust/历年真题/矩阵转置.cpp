//考二维数组

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[j][i];
    
    for(i=0;i<n;i++){
            for(j=0;j<n-1;j++)
                cout<<a[i][j]<<' ';
            cout<<a[i][n-1]<<endl;
    }

    return 0;
}