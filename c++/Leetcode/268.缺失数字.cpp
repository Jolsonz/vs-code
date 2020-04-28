/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    //如果不用这个方法，我想应该是等差数列求和公式，然后减去实际上的和，就得到缺失的数。
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
        return nums.size();//不加这句报错。有Nums.size()==0的情况。但为何测试用例过不去。
    }
};
// @lc code=end

