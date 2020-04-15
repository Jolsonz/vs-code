/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
//递归法，超时
    // int climbStairs(int n) {
    //     if(n==1) return 1;
    //     if(n==2) return 2;
    //     return climbStairs(n-1)+climbStairs(n-2);
    // }
//动态规划，斐波那契数列法。
    int climbStairs(int n) {
        if(n==1) return 1;
        int a=1,b=2,c;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;//这样n==2时自动返回2
    }
};
// ????
// @lc code=end

