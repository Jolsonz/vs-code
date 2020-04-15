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
// 注意指针的应用。
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans=head;//前指针
        while(head && head->next){
            if(head->val== head->next->val){
                head->next=head->next->next;
            }
            else head=head->next;
        }
        return ans;
    }
};
// @lc code=end

