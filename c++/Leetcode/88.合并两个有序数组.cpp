/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    // 这题还是挺有意思的，我一开始想着合并之后去除0，后来发现它不是这个意思。
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m-- + n-- -1;//m--，n--是为了指着末尾，p-1是为了指着合并数组的末尾。
        while(m>=0 && n>=0){
            nums1[p--]=nums1[m]>nums2[n]?nums1[m--]:nums2[n--];
        }
        while(n>=0){//m剩余都不要紧，n剩余需要手动加
            nums1[p--]=nums2[n--];
        }
    }

    // 其实可以直接把nums2接到num1后面，然后排序。效率上差不多。
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        for(int i=0;i<n;i++){
            nums1[m++]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
// @lc code=end

