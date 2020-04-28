/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0) && (1<<30) % n == 0;
        //左移30位到Int允许的最大2次幂，然后他只能整除所有的二次幂组成的值。
        return (n > 0) && (n & -n) == n;
        //这个也可以。好强啊。好难想到这个，这个是二进制的操作了。
    }
};
// @lc code=end

