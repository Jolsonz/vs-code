/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        // 当然双指针法比这简单。
        for(int i=0;i<len-1;i++)
            for(int j=i+1;j<len;j++){
                if(nums[i]+nums[j] == target)
                return {i,j};//还有这种直接返回方式啊。
            }
        
       return {};
    }

};
// @lc code=end

