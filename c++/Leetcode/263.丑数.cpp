/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        if(num==0) return false;//特殊情况
        while(num%2==0) num/=2;
        while(num%3==0) num/=3;
        while(num%5==0) num/=5;
        if(num==1) return true;//特殊情况，或5/5=1这种情况
        return !num;
    }
};
// @lc code=end

