// 1069 微博转发抽奖 (20分)
// 可能有人转发多次，但不能中奖多次。定一个set<string> 中奖了就放进去。然后不能重复中。
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n,s;//转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号（编号从 1 开始）
    cin>>m>>n>>s;
    vector<string> join;//放参与者的ID
    string t;
    for(int i=0;i<m;i++){
        cin>>t;
        join.push_back(t);
    }
    set<string> have;//中了奖的。
    for(int i=s-1;i<m;i+=n){//中奖间隔是n
        while(have.find(join[i])!=have.end()) i++;//如果获奖名单里有这个人
        have.insert(join[i]);//中奖者。
        cout<<join[i]<<endl;
    }
    if(m<n||s>m) cout<<"Keep going...";
    return 0;
}