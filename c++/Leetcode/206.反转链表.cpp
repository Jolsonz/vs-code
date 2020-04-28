/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    // 注意pre可以不用new一个头结点，没必要还麻烦，直接指着空就是。
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head, *pre= NULL ,*nex;
        while(cur){//当前指针非空
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        return pre;
    }
};
// @lc code=end

