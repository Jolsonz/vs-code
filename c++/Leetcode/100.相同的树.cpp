/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    // 错误思路，作借鉴
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //     if(p==q && q==NULL) return true;
    //     if(p->val!=q->val) return false;
    //     isSameTree(p->left,q->left);
    //     isSameTree(p->right,q->right); 
    //     return true;
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==q && q==NULL) return true;
        if(p!=NULL && q!=NULL && p->val==q->val){
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        else return false;
    }
};
// @lc code=end

