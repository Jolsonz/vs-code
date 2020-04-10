// 链表元素分类
// 前面有一题反转链表，很相似，思路相同，可用vector存答案，空间换时间。棒
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int first, k, n, temp;
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> temp;//地址
        cin >> data[temp] >> next[temp];
    }
    int sum = 0;//不一定所有的输入的结点都是有用的，加个计数器
    while (first != -1) {
        list[sum++] = first;
        first = next[first];
    }//这是把元素的首地址都按顺的存在list[]里
    for(int i=0;i<sum;i++)
        if(data[list[i]]<0) ans.push_back(list[i]);//把地址放进去
    for(int i=0;i<sum;i++)
        if(data[list[i]]>=0 && data[list[i]]<=k)
            ans.push_back(list[i]);
    for(int i=0;i<sum;i++)
        if(data[list[i]]>k)
            ans.push_back(list[i]);
    for(int i=0;i<sum-1;i++)
        printf("%05d %d %05d\n", ans[i], data[ans[i]], ans[i + 1]);
    printf("%05d %d -1", ans[sum - 1], data[ans[sum - 1]]);
    return 0;
}