/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
// 这题的主要思路就是，如果左边的字符比右边的小，那么这个字符代表的值就要被减去。
class Solution {
    unordered_map<char,int> mp;
    // 用Map写方便一点，不然要用各种条件判断或者switch了
public:
    int romanToInt(string s) {
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]]) ans-=mp[s[i]];
            else ans+=mp[s[i]];
        }
        return ans;
    }
};
// @lc code=end

