/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    // 思路可以看官方说明的方法一，就是递归的取中间值当根节点。
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         return half(nums,0,nums.size()-1);
    }
    TreeNode* half(vector<int>& nums,int left,int right){
        if(left>right) return NULL;
        int p=(left+right)/2;
        TreeNode* root = new TreeNode;
        root->val=nums[p];//可以不这么赋值。
        root->left=half(nums,left,p-1);
        root->right=half(nums,p+1,right);
        return root;
    }
};
// @lc code=end

