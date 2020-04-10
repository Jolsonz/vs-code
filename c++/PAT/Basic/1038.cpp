/*
 * @Author: Jolson 
 * @Date: 2020-02-06 15:08:08 
 * @Last Modified by: Jolson
 * @Last Modified time: 2020-02-06 15:11:56
 */

// 1038 统计同成绩学生
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,score[101]={0},t;//直接打表
    cin>>n;
    while (n--)
    {
        cin>>t;
        score[t]++;
    }
    int m;//查几个人的成绩
    cin>>m;
    vector<int> ans;
    while (m--){
        cin>>t;
        ans.push_back(score[t]);
    }
    for(int i=0;i<ans.size();i++){
        if(i==ans.size()-1) cout<<ans[i];
        else cout<<ans[i]<<' ';
    }
    return 0;
}
