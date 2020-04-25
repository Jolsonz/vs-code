/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1[128]={},s2[128]{};
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
            s2[t[i]]++;
            if(s1[s[i]]!=s2[t[i]]) return false;
        }
        return true;
    }
};
// @lc code=end

