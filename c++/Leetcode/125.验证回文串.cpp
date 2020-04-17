/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        if(s=="") return true;
        for(auto it=s.begin();it!=s.end();it++){
            if(isupper(*it) ) *it=*it-'A'+'a';//是大写转小写
            else if(islower(*it) || isdigit(*it)) continue;//小写和数字不管
            else {
                s.erase(it);
                it--;//注意移除一个之后，自动跳到了下一个，所以后退一个。
            }
        }
        string temp=s;
        reverse(s.begin(),s.end());
        return temp==s;
    }
};
// @lc code=end

