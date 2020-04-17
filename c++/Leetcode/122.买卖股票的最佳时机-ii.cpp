/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
    // 诶，我靠，一次过了
    // 算法可以直接简化为只要今天比昨天大，就卖出。因为当天还能买入
public:
    int maxProfit(vector<int>& prices) {
        int pre=INT_MAX,sum=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>=pre){//比上一个价格贵，卖出
                sum+=prices[i]-pre;
                pre=prices[i];//记录上一个价格。
            }
            else pre=prices[i];//比上一个价格便宜，买入。
        }
        return sum;
    }
};
// @lc code=end
