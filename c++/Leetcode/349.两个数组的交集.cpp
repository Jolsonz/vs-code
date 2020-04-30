/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    // 不考虑输出结果的顺序
    // 学到很多东西。
    /*  1. set可以用vector初始化，而不用一个个遍历了初始化。
        2. auto &it: v 这种遍历方式v只能是容器或者流，C++11的特性
        3. push_back(it)而不是push_back(*it)
        */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s(nums1.begin(),nums1.end());//还有这个初始方法，我都不知道
        for(auto it:nums2){//这里因为不需要改变nums2，it哪里可以不加引用
            if(s.erase(it)){//如果说能成功在set中找到并erase掉，则说明时重复的，压入ans
                ans.push_back(it);
            }
        }
        return ans;
    }
};
// @lc code=end

