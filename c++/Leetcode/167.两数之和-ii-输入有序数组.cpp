/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 这个显然用双指针法比较好
        int l=0,r=numbers.size()-1;
        while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum<target) l++;
            else if(sum>target) r--;
            else return{++l,++r};
        }
        return {};
    }
};
// @lc code=end

