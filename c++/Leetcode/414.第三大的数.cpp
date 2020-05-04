/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
// 注意还可以用set，但是set之后自动递增排列了，若set的size不小于3输出倒数第三个元素；若set的size小于3，输出最后一个元素。
    int thirdMax(vector<int>& nums) {
        set<int> t(nums.begin(),nums.end());
        auto it=t.rbegin();//右边的开始,反向迭代器
        if(t.size()<3) return *it;
        else{
            it++;//反向迭代器++是往左移的。
            it++;
            return *it;
        }
    }

// 理论上来说是O(3n)复杂度，也就是O(n)级别
    int thirdMax(vector<int>& nums) {
        long int max=LONG_MIN;
        for(int i = 0 ;i<nums.size();i++)
            if(nums[i]>max)
                max=nums[i];
        long int sec_max = LONG_MIN;
        for(int i = 0 ;i<nums.size();i++)
            if(nums[i]>sec_max&&nums[i]<max)
                sec_max=nums[i];
        long int thr_max = LONG_MIN;
        for(int i = 0 ;i<nums.size();i++)
            if(nums[i]>thr_max&&nums[i]<max&&nums[i]<sec_max)
                thr_max=nums[i];
        if(thr_max == LONG_MIN)//没有第三大的。
            return max;//返回最大
        else
            return thr_max;
    }
};
// @lc code=end

