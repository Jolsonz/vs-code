/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    //这题也挺有趣的，就是递归挺难想，我也是参考了一个人的JAVA写法。
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;//为空肯定是
        return isMirror(root->left,root->right);//然后递归遍历左右子树了
    }
    bool isMirror(TreeNode *p,TreeNode *q){
        if(!q && !p) return true;
        if(!q || !p) return false;
        if(p->val==q->val)
            return isMirror(p->left,q->right)&&isMirror(p->right,q->left);
        return false;
    }
};
// @lc code=end

