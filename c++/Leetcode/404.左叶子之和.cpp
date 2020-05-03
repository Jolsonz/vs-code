/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int sum=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        left(root);
        return sum;
    }
    // 递归。
    void left(TreeNode* root){
        if(root == NULL) return;//跳出条件
        if(root->left != nullptr)//必须先加一句判断有左子树。
            if(root->left->left==NULL && root->left->right==NULL) 
                sum+=root->left->val;
        left(root->left);
        left(root->right);
    }
};
// @lc code=end

