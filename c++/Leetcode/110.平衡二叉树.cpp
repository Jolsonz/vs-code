/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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

// 这个解法我不太会。从底层往上递归，可以省时间。
class Solution {
    bool help(TreeNode* root,int& height){
        if(root==NULL){//递归终点，在末尾才会返回height=-1,然后层层递进
            height=-1;
            return true;
        }
        int left,right;//这时候是没有值的，不重要，等到递归到叶子节点才会给赋值。
        if(help(root->left,left) && help(root->right,right) && abs(left-right)<2 ){
            height=max(left,right)+1;
            return true;
        }
        return false;
    }
public:
    bool isBalanced(TreeNode* root) {
        int height;
        return help(root,height);
    }
};

// 法二，从顶往下递归，但是重复计算了height,效率低一点,但实际上效率还比上面那个高一点？为何，时间复杂度上分析不是这样的啊。
// class Solution
// {
// private:
//     int height(TreeNode* root){//用来获得每一层的高
//         if(root== NULL){
//             return -1;
//         }
//         return 1+max(height(root->left),height(root->right));
//     }
// public:
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL) return true;
//         return (abs(height(root->left)-height(root->right))<2 && isBalanced(root->left) && isBalanced(root->right));
//     }
// };


// @lc code=end

