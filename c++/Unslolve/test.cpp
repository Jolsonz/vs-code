#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // 麻烦在补码
    string toHex(int num) {
        if (num == 0) return "0";
        string hex = "0123456789abcdef", ans = "";
        while(num && ans.size() < 8){
            ans = hex[num & 0xf] + ans;
            num >>=  4; 
        }
        return ans;
    }
};
int main(){
    Solution t;
    int a;
    cin>>a;
    cout<<t.toHex(a);
    return 0;
}