/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    // 层次遍历，队列实现
    // 自己写的，我还在想它为什么结构体里不给个高度，其实没必要。用个for循环就能输出同一层的。
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;//放结果
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int size=q.size();//注意不要把判断条件写在for里，它可能会变 
            for(int i=0;i<size;i++){//每次先循环一层的，都给它压进去。
                TreeNode *now=q.front();//指针指着队顶元素
                temp.push_back(q.front()->val);//取队顶元素放入。
                q.pop();
                if(now->left != NULL) q.push(now->left);
                if(now->right != NULL) q.push(now->right);
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

