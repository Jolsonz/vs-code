/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    // 我太难了，这个写法直接超时。暴力不可取。在电脑上是能正确得到答案的。
    // int maxProfit(vector<int>& prices) {
    //     int max=0;
    //     if(prices.size()<2) return 0;
    //     for(int i=0;i<prices.size()-1;i++){//买入
    //         for(int j=i+1;j<prices.size();j++){//卖出
    //             if(prices[j]-prices[i]>max) max=prices[j]-prices[i];
    //         }
    //     }
    //     return max;
    // }

    // 这方法挺好，就是一次遍历法
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX,maxPrice=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(prices[i],minPrice);
            maxPrice=max(maxPrice,prices[i]-minPrice);
        }
        return maxPrice;
    }

};
// @lc code=end

