/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    
    // 这两个sort耗时了，同样可以用hash做
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) return t[i];
        }
        return t[s.size()];
    }
    // 这个就双百分
    char findTheDifference(string s, string t) {
        int c[26]={};
        for(int i=0;i<s.size();i++){
            c[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            c[t[i]-'a']--;
            if(c[t[i]-'a']<0) return t[i];
        }
        return 'a';//没有这句会报错，太离谱了
    }
};
// @lc code=end

