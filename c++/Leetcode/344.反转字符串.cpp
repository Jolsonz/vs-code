/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        //直接reverse或者循环一半来交换
        reverse(s.begin(),s.end());
    }
};
// @lc code=end

