/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
//这题可以用快慢指针的思想去做，有点类似于检测是否为环形链表那道题
//如果给定的数字最后会一直循环重复，那么快的指针（值）一定会追上慢的指针（值），也就是
//两者一定会相等。如果没有循环重复，那么最后快慢指针也会相等，且都等于1。
// 也可以用Map,把中间结果放在map里，如果后面又算出来同样的中间结果，证明不可能达到了。
// 另外有老哥算出，当n等于4以后则意味着进入了死循环
class Solution {
public:
    // 这思路给我整乐了，直接暴力循环100次，没有就是没有了。
    bool isHappy(int n) {
        int i=10;//其实10次也可以。
        while(i--){
            int ans=0;
            while(n>0){
                ans+=(n%10)*(n%10);
                n/=10;
            }
            n=ans;
            if(n==1) return true;
        }
        return false;
    }
};
// @lc code=end

