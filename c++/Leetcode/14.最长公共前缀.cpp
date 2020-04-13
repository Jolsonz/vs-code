/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
//这也是借鉴了一个人的写法，垂直扫描法。
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";//这个操作很好，因为没有匹配会自动返回
        int minLen=0;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()>minLen) minLen=strs[i].size();
        }//先找到最小长度，只需要对比最小长度次。
        for(int i=0;i<minLen;i++){
            char c=strs[0][i];//去第一个字符串的值做标准比较
            int flage=1;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    flage=0;//说明遇到不同的了，不用比了。
                    break;
                }
            }
            if(flage==0) return s;
            else s=s+c;
        }
        return s;
    }
};
// @lc code=end

