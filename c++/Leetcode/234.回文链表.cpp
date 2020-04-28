/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    // ????????????????????reverse???????????
    bool isPalindrome(ListNode* head) {
        // ??????????
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=0,j=v.size()-1;i<v.size()/2;i++,j--){
            if(v[i]!=v[j]) return false;
        }
        return true;
    }
};
// @lc code=end

