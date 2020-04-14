/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
// 有毒吧，我手动输入样例4报错?提交无错？[1,3,5,6], 0
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0 || nums[0]>target) return 0;//基本操作，力扣很喜欢这种测试例
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;
            if(nums[i]>target){
                if(nums[i-1]<target) return i;
            }

        }
        return nums.size();
    }
    // 另一写法，简洁的多。
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size();i++){
        if(nums[i] >= target){
            return i;
            }
        }
    return nums.size();
    }
};
// @lc code=end

