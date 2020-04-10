//这题有啥意义么。
// 建立一个升序链表并遍历输出。
// 可能原来的意思是考察每次要找好位置插入把。。不过，在线oj没有感情，懒得写链表了，之后有空再写一遍链表版。
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++)
        cin>>ans[i];
    sort(ans,ans+n);
    for(int i=0;i<n;i++)
        cout<<ans[i]<<' ';
    return 0;
}