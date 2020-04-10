// 1049 数列的片段和 (20分)
// 果然后面两个样例超时，要找到规律来优化，不能这么三重循环，后面时间开销太大了
#include<bits/stdc++.h>
using namespace std;
double a[100000];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
        }
    }
    printf("%.2f",sum);
    return 0;
}