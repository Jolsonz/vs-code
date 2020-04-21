/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    //哈哈哈哈，这解法画风太清奇了。
    bool hasCycle(ListNode *head) {
        while(head){
            if(head->val == 313413413)//一个难以出现的数
                return true;
            else head->val = 313413413;//破坏链表的值了
            head=head->next;
        }
        return false;
    }
    
    // 法2，快慢指针法,快指针走两步，慢指针走一步。
    // 当一个链表有环时，快慢指针终究会碰到一起
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;//慢指针
        ListNode* fast = head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!= NULL) fast=fast->next;//再移一次
            if(fast == slow) return true;//同样的
            slow=slow->next;
        }
        return false;
    }
};
// @lc code=end

