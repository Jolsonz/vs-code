/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        if(s=="") return true;
        for(auto it=s.begin();it!=s.end();it++){
            if(isupper(*it) ) temp+=tolower(*it);//是大写转小写
            else if(islower(*it) || isdigit(*it)) temp+=*it;//小写和数字不管
        }
        s=temp;
        reverse(s.begin(),s.end());
        return temp==s;
    }
};
// @lc code=end

