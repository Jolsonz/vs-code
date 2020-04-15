/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}//这是构造函数把。
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;//还是有空值情况。
        int temp=head->val;
        ListNode *pre=head,*ans=head;//前指针
        while(head->next!=NULL){
            head=head->next;
            if(head->val!=temp){
                pre->next=head;
                pre=head;
                temp=head->val;
            }
        }
        if(pre->val==head->val)
            pre->next=NULL;//注意最后head和pre可能是同一个值，那么pre->next还没改。
        return ans;
    }
};
// @lc code=end

