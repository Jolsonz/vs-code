/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
    // 交换律：a ^ b ^ c <=> a ^ c ^ b
    // 任何数于0异或为任何数 0 ^ n => n
    // 相同的数异或为0: n ^ n => 0
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // 用异或，强啊
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans ^=nums[i];
        }
        return ans;

    }
};
// @lc code=end

