// 输入一系列整数，将其中最大的数挑出(如果有多个，则挑出一个即可)，并将剩下的数进行排序，如果无剩余的数，则输出-1。
// 直接输出到剩最后一个就完了
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    if(n==1){ 
        cin>>n;//只有一个数，必是最大值。就放到n里面算了。
        cout<<n<<"\n-1";//不剩余，故输出-1，没得排序的。
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]<<endl;//输出这个最大的
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<' ';
        }
    }
    return 0;
}