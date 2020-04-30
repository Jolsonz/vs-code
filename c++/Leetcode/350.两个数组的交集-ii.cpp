/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    // 结果中，每个元素出现的次数，应与元素在两个数组中出现的次数一致。
    // 跑是跑过了，但是耗时长
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto &it:nums1){//遍历第一个
            auto k=find(nums2.begin(),nums2.end(),it);//vector里不带find，所以直接用algorithm里的find,注意不用*it，因为这里it显然不是指针，而是Int类型的数
            if(k!=nums2.end()){
                ans.push_back(it);
                nums2.erase(k);
            }
        }
        return ans;
    }
};
// @lc code=end

