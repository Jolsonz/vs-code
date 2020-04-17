/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    // 法1，偶然会报错,[1,2]应该输出2，它会输出1，但我想了一下，下面这个函数也是输出2啊。
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        if (root->left == NULL && root->right != NULL) {
            return 1 + minDepth(root->right);
        }
        if (root->right == NULL && root->left != NULL) {
            return 1 + minDepth(root->left);
        }
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
    //法2，更简洁
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int left=minDepth(root->left),right=minDepth(root->right);//用了这个会一直递归到底层。
        return (left && right) ? 1+min(left,right):1+left+right;//left，right其中只要有一个是0，那么高度就直接加上另一个即可。
    }
};
// @lc code=end

