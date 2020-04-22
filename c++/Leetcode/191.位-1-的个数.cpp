/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    // 此题参考上题的解法，很容易
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){//n不为0的时候
            if(n&1) count++;
            n>>=1;//右移一位
        }
        return count;
    }
};
// @lc code=end

