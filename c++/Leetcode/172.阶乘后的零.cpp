/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    // // 暴力法超时，第13个就超时了
    // int fabricate(int n){
    //     if(n<=1) return 1;
    //     return n*fabricate(n-1);
    // }
    // int trailingZeroes(int n) {
    //     int ans=fabricate(n);
    //     string t=to_string(ans);
    //     int sum=0;
    //     for(int i=t.size()-1;i>=0 && t[i]=='0'; i--,sum++){}
    //     return sum;
    // }

    //实际上就是数5的个数,算是个数学问题。
    int trailingZeroes(int n) {
        int count=0;
        while(n>=5){
            count+=n/5;
            n=n/5;
        }
        return count;
    
    }
};
// @lc code=end

