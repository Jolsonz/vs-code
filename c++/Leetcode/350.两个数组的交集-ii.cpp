/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    // 官方版本，写得很好
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        return intersect(nums2, nums1);//交换数组元素,短的在前，长的在后。
    }
    unordered_map<int, int> m;
    for (int n : nums1) {//短的作为hash_map,当然这个地方不用auto也可以。
        ++m[n];
    }
    int k = 0;
    for (auto n : nums2) {
        auto it = m.find(n);
        if (it != m.end() && --it->second >= 0) {
            nums1[k++] = n;
        }
    }
    return vector(begin(nums1), begin(nums1) + k);
}


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

