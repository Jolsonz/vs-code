/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        // 还是要遍历一遍
        int c[26]={};
        for(int i=0;i<s.size();i++){
            c[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(c[s[i]-'a'] == 1) return i;
        }
        return -1;
    }
};
// @lc code=end

