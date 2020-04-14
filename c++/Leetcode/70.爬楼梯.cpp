/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
// ?????
    // int climbStairs(int n) {
    //     if(n==1) return 1;
    //     if(n==2) return 2;
    //     return climbStairs(n-1)+climbStairs(n-2);
    // }
// ????????????
    int climbStairs(int n) {
        if(n==1) return 1;
        int a=1,b=2,c;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;//??n==2????2??
    }
};
// ????
// @lc code=end

