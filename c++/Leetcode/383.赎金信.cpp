/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    // map映射，稍微耗时有点长。可以不用map映射，因为是字母，所以开一个长26的Int数组也可以。
    bool canConstruct(string ransomNote, string magazine) {
        // 就是说，ransomNote得是magazine的子串才行
        unordered_map<char,int> mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(mp[ransomNote[i]]== 0) return false;
            else mp[ransomNote[i]]--;
        }
        return true;
    }
};
// @lc code=end

