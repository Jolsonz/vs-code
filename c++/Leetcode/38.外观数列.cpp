/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string s="1";//起始序列
        int j;
        for (int k = 1;k < n;k++) {//循环n-1次，得到第n个项，存在s里
            string t;//暂存序列
            for (int i = 0;s[i];i = j) {//s作为string类型，结尾是0，到达尾部结束循环;
                for (j = i;s[j] && s[j] == s[i];j++);//从s[i]开始看看往下有几个相同的如果相同就继续往下找，一直到那个不相等的，注意s[j]!=0
                t += to_string((j - i)*10+s[i]-'0');//j-i得到s[i]的个数
            }
            s = t;
        }
        return s;
    }
};
// @lc code=end

