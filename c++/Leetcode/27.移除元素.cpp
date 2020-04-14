/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val) {
                t++;
                continue;
            }
            nums[i-t]=nums[i];
        }
        return nums.size()-t;
    }
};
// @lc code=end

