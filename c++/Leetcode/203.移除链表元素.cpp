/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    // 这题，考基本操作吧，小问题。
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        ListNode* p= new ListNode;
        ListNode* t=head;
        p->next=head;
        p->val=INT_MAX;//作为头结点
        head=p;//先变成头结点
        while(t){//t不为空。
            if(t->val==val){
                p->next=t->next;
                t=t->next;
                continue;
            }
            t=t->next;
            p=p->next;
        }
        return head->next;
    }
};
// @lc code=end

