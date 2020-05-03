/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        // 卧槽，看错题了，以为是从s中找最长的回文串，那就麻烦了。
        int c[128]={0};//存各个字符出现的次数
        for(auto i : s)
            c[i]++;
        int sum=0,k=0;//回文串应该是所有的字符的偶数个数加一个奇数（如果有）
        for(auto i : c){
            sum+=i/2*2;//先整除再乘2
            if(i%2 && !k) k=1;
        }
        return k+sum;
    }
};
// @lc code=end

