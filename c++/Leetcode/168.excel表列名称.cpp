/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        // 像是26进制，但不纯粹
        string ans;//存答案
        int t;
        while(n){
            n--;//这个玩意儿让我想了半天，最后也没想出来，去看答案了。
            // 减了一，则就是从0开始了，0-25对应者'A'-'Z'，就是标准的26进制了
            // 不减这个1，对52的操作会相当麻烦，减了这个1,52变51，%26输出Z，除26变成1，完美。
            ans=char(n%26+'A')+ans;//往String后面加
            n/=26;
        }
        return ans;
    }
};
// @lc code=end

