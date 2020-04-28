/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
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
    // 这个写法在第25个测试点报错，奇怪，不明白，是大数据下的BUG么。我还是不明白哪里错了
    // 哈哈哈，我懂了，可能忘右走到底还要往做走
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root->val>p->val && root->val>q->val) root=root->left;
        while(root->val<p->val && root->val<q->val) root=root->right;
        while(root->val>p->val && root->val>q->val) root=root->left;
        while(root->val<p->val && root->val<q->val) root=root->right;
        return root;
    }

    //用递归就没事，莫名奇妙。
    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     if(root->val > p->val && root->val > q->val)    //都位于左子树
    //         return lowestCommonAncestor(root->left, p, q);
    //     else if(root->val < p->val && root->val < q->val)//都位于右子树
    //         return lowestCommonAncestor(root->right, p, q);
    //     return root;                    //分别位于左右子树  
    // }
};
// @lc code=end

