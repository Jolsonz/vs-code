#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        for(int i=0;;i++){
            if(strs[0][i]!=strs[strs.end()-1][i]) return substr(0,i);
        }
        return sum==k;
    }
};

int main() {
    Solution a;
    vector<string> strs=["flower","flow","flight"];
    cout<<a.romanToInt(strs);
    return 0;
}