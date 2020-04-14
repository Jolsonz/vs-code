/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
// 简单，不考虑效率直接暴力求解。500ms
    int maxSubArray(vector<int>& nums) {
        int max=nums[0],sum;
        for(int i=0;i<nums.size();i++){
            if(max>=0 && nums[i]<=0) continue;//哈哈哈哈，暴力法，添加了这句话时间降了一半
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>max) max=sum;
            }
        }
        return max;
    }
    // 此题另一种解法效率高,12ms。这个解法利用了，最大值大概率是正值，如果是负值，列表肯定全是负值这个想法。
    int maxSubArray(vector<int>& nums) {
        int sum= nums[0];
        int max= nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(sum<0)
                sum=0;    //sum<0 则sum直接更新不增反减，将sum归零再更新
            sum+= nums[i];
            max= (max<sum)? sum: max;   //取序列和最大值
        }
        return max;
    }
};
// @lc code=end

