/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        // 双指针法应该是可以的,还可以，就是速度稍微慢一点。
        int i,j;
        for(i=0,j=0;i<s.size(),j<t.size();j++){
            if(s[i]==t[j]) i++;
        }
        if(i==s.size()) return true;//s能全部找到，就是true
        else return false;

    }
};
// @lc code=end

