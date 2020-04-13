#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int minLen=0;
        for(int i=0;i<strs.size;i++){
            if(strs[i].size>minLen) minLen=strs[i].size;
        }//先找到最小长度，只需要对比最小长度次。
        for(int i=0;i<minLen;i++){
            char c=strs[0][i];//去第一个字符串的值做标准比较
            int flage=1;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    flage=0;//说明遇到不同的了
                    break;
                }
            }
            if(flage==0) return s;
            else s=s+c;
        }
        return s;
    }
};


int main() {
    Solution a;
    vector<string> strs;
    string b;
    while(cin>>b){
        strs.push_back(b);
    }

    cout<<a.longestCommonPrefix(strs)<<endl;
    return 0;
}