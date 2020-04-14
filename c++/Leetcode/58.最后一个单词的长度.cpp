/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int f=1,len=0;
        if(s=="") return 0;
        for(int i=s.size()-1;i>=0;i--){//从后往前扫描。
            if(f && s[i]==' ') continue;//为空格先跳过。
            if(s[i]!=' '){
                f=0;
                len++;
                continue;
            }
            if(!f && s[i]==' ') break; 
        }
        return len;
    }
};
// @lc code=end

