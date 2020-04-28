/*
 * @lc app=leetcode.cn id=237 lang=cpp
 *
 * [237] 删除链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // 简单操作,但是像在考阅读理解。直接删除node指向的元素
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
        return;
    }
};
// @lc code=end

