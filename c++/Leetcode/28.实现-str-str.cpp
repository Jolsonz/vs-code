/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)==string::npos) return -1;
        if(needle=="") return 0;
        return haystack.find(needle);
    }
};
// @lc code=end

