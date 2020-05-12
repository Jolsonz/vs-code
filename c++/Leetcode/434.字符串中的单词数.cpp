/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0) return 0;
        int count=0;
        int f=1;
        for(auto i:s){
            if(i!=' ' && f){
                count++;
                f=0;
            }
            if(i==' ') f=1;

        }
        return count;
    }
};
// @lc code=end

