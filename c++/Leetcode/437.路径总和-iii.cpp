/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    // ????????easy????????
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        return dfs(root , sum) + pathSum(root->left,sum) + pathSum(root->right,sum);
    }
    int dfs(TreeNode* root ,int sum){
        if(root == nullptr) return 0;
        sum-=root->val;
        return(0 == sum ? 1:0)+dfs(root->left,sum)+dfs(root->right,sum);
    } 
};
// @lc code=end

