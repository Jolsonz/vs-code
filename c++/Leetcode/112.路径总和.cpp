/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
public:
// 自己写出来的，比较有趣。递归操作。
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        if(!root->left && !root->right){
            return sum==root->val;
        }
        return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);
    }
};
// @lc code=end

