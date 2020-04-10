// 组合数的和
// 看起来就是简单的模拟
#include<iostream>
using namespace std;
int main(){
    int N,sum=0;
    cin>>N;
    int a[N],i=0;
    int n=N;
    while (n--)//妈的，我好喜欢写N--，把N这个数给变了，靠。。
    {
       cin>>a[i++];
    }
    for(i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) continue;
            sum+=a[i]+a[j]*10;
        }
    }
    cout<<sum;
    return 0;
}