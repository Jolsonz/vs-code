#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // 稍微有点没整明白
    int getSum(int a, int b) {
        while (b) {
            auto c = ((unsigned int)a & b) << 1; // 防止 AddressSanitizer 对有符号左移的溢出保护处理
            a = a ^ b;
            b = c;
        }
        return a;
    }
};
int main(){
    Solution t;
    int a,b;
    cin>>a>>b;
    cout<<t.getSum(a,b);
    return 0;
}