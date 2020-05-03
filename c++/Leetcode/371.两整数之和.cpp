/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] 两整数之和
 */

// @lc code=start
class Solution {
public:
    // 稍微有点难理解，可以调试一下比较好理解
    int getSum(int a, int b) {
        while (b) {
            auto c = ((unsigned int)a & b) << 1; // 防止 AddressSanitizer 对有符号左移的溢出保护处理
            a = a ^ b;
            b = c;
        }
        return a;
    }
};
// @lc code=end

