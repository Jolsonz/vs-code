//其实就是斐波那契数列，但是问题是，它要求非递归写法
// 要么推出规律了做，要么动态规划。
#include<iostream>
using namespace std;
int main(){
    long long a[90];
    int N;
    while(cin>>N){
        a[1]=1;a[2]=2;
        for(int i=3;i<=N;i++){
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[N]<<endl;
    }
    return 0;
} 