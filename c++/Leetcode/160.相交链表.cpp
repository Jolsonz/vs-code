/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // 这个题目说的不太清楚，不过输出应该是那个相交的节点。注意，相交节点指的是值相同的同时指针也相同
        // 一开始没什么思路，看了一下解法，因为从长度上L1+L2==L2+L1，所以一定可以这么做。
        ListNode *L1=headA,*L2=headB;
        if(!headA || !headB) return NULL;//只要有一个是空就返回空
        while(L1!=L2){
            L1=L1? L1->next:headB;
            L2=L2? L2->next:headA;//走完自己的就走对面的
        }
        //因为走到最后都会指到NULL，所以会L1==L2了，就跳出
        return L1 ;
    }
};
// @lc code=end

