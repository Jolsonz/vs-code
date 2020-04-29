/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
    vector<int> _nums;
public:
    NumArray(vector<int>& nums) {
        _nums=nums;
    }
    //ok，这个构造函数用来初始化的。
    int sumRange(int i, int j) {
        int sum=0;
        for(int a=i;a<=j;a++){
            sum+=_nums[a];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

