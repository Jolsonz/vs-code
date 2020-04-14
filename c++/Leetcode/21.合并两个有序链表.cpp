/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    //思路上应该不难，可以用两个指针指着遍历，顺序把结果放在ans中
    // 或者用递归的方式。
public:
    //递归法，这个方法挺有趣的，但是比较难想到。        
/*  函数功能
    返回 l1指向的结点和 l2 指向的结点中，值较小的结点
    并将从下级函数获得的返回值，链接到当前结点尾部。
    函数结束条件
    当 l1为空，或 l2为空，函数结束
    返回 l1或 l2中剩下的部分 */

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;//结束条件
        if(l1->val<=l2->val){
            l1->next=mergeTwoLists(l1->next,l2);//链接到尾部。
            return l1;
        }
        l2->next=mergeTwoLists(l1,l2->next);
        return l2;
    }
    // 迭代法，就是分两个指针指着遍历。
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode* head=new ListNode,*ans=head;
        while(l1!=NULL && l2!=NULL){
            if(l1->val>=l2->val){
                head->next=l2;
                l2=l2->next;
            }
            else{
                head->next=l1;
                l1=l1->next;
            }
            head=head->next;
        }
        head->next=l1==NULL?l2:l1;
        return ans->next;
    }
};
// @lc code=end

