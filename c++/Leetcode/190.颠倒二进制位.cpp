/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
public:
    //考位运算，自己没见过。
    uint32_t reverseBits(uint32_t n) {
        // 我都没见过这数据类型，我第一想法是reverse之后用stoi这种函数
        uint32_t ans=0;
        int i=32;
        while(i--){
            ans=ans<<1;//左移一位
            ans+=n&1;//把末尾加上去
            n>>=1;//n右移一位
        }
        return ans;
    }
};
// @lc code=end

