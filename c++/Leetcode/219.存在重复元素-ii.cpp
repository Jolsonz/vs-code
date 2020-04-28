/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // 这个自然不能用Set来解决了。
        // 用map每次存前一次的遇到该个值的位置。类似于205题
        // 哈哈，一次解决了。
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){//mp中有上一次的几录
                if(i-mp[nums[i]]<= k) return true;
                mp[nums[i]]=i;//更新。
            }
            else mp[nums[i]]=i;
        }
        return false;
    }
};
// @lc code=end

