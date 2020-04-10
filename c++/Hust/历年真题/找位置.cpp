// map对应的int ,double都会自动置初始值为0,不用你去置初值。
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    unordered_map<char,vector<int>> m;//用map会自动排序，会以first从小到大的顺序排序。
    for(int i=0;i<s.size();i++){
        m[s[i]].push_back(i);
    }
    bool asc[128]={false};
    for(int j=0;j<s.size();j++){
        if(asc[s[j]]==false) asc[s[j]]=true;
        else continue;
        auto it = m.find(s[j]);
        if(it->second.size()>1){//
            printf("%c:%d",it->first,it->second[0]);
            for(int i=1;i<it->second.size();i++){
                printf(",%c:%d",it->first,it->second[i]);
            }
            putchar('\n');
        }
    }
    return 0;
}