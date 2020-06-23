/*
 * @lc app=leetcode.cn id=441 lang=java
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
    public int arrangeCoins(int n) {
        int result = 0 ,sum =n;
        for(int i=1;sum>0;i++){
            sum-=i;
            result++;
        }
        if(sum<0) result--;
        return result;
    }
}
// @lc code=end

