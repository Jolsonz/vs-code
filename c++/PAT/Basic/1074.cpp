// 1074 宇宙无敌加法器 (20分)
// 借鉴柳的
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s, s1, s2, ans;
    int carry = 0, flag = 0;//carry是存进位的
    cin >> s >> s1 >> s2;
    ans = s;
    // 把s1和s2都补齐0到s的长度
    string ss1(s.length() - s1.length(), '0');//很好用的string初始化技巧。
    s1 = ss1 + s1;
    string ss2(s.length() - s2.length(), '0');
    s2 = ss2 + s2;
    for(int i = s.length() - 1; i >= 0; i--) {//从后往前
        int mod = s[i] == '0' ? 10 : (s[i] - '0');//s[i]就是进制
        ans[i] = (s1[i] - '0' + s2[i] - '0' + carry) % mod + '0';
        carry = (s1[i] - '0' + s2[i] - '0' + carry) / mod;
    }
    if (carry != 0) ans = to_string(carry) + ans;//还有进位，一定是i=0时的，那么前面一定是10进制的，可以直接加到前面的。

    for(int i = 0; i < ans.size(); i++) {
        if (ans[i] != '0' || flag == 1) {//不要输出字符串ans前面的0。
            flag = 1;
            cout << ans[i];
        }
    }
    if (flag == 0) cout << 0;//如果一个字符都没有输出，最后要输出一个0
    return 0;
}