/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    // 我的思路是差不多的，但是实现部分自己失误了。
    vector<string> ans;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == NULL) return ans;
        deep(root,"");//初始调用。
        return ans;
    }
    void deep(TreeNode* root,string s){
        s+=to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            ans.push_back(s);
            return;//结束调用。
        }
        if(root->left) deep(root->left,s+"->");
        if(root->right) deep(root->right,s+"->");
    }
};
// @lc code=end

