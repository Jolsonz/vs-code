/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
// 利用 1+3+5+7+9+…+(2n-1)=n^2，即完全平方数肯定是前n个连续奇数的和
// 注意得用减法，不能用加法，容易超时
    bool isPerfectSquare(int num) 
    {
        int num1 = 1;
        while(num > 0) 
        {
            num -= num1;
            num1 += 2;
        }
        return num == 0;
    }
};
// @lc code=end

