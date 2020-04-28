/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    // 这个方法不行，可能有ABA,BAA这个错误。
    // bool isIsomorphic(string s, string t) {
    //     int s1[128]={},s2[128]{};
    //     if(s.size()!=t.size()) return false;
    //     for(int i=0;i<s.size();i++){
    //         s1[s[i]]++;
    //         s2[t[i]]++;
    //         if(s1[s[i]]!=s2[t[i]]) return false;
    //     }
    //     return true;
    // }

    // 这个思路就是说，每个对应的字母在字符串中首先出现的位置应当相同。
    // ABB,CDD，A,C首先出现都是在0。B,D首先出现都是在1
    // 这个方法最快。
    bool isIsomorphic(string s, string t){
        if(s=="") return true;
        for(int i=0;i<s.size();i++){
            if(s.find(s[i])!= t.find(t[i])) return false;
        }
        return true;
    }

    // hash映射实现
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> smap;
        unordered_map<char,char> tmap;
        for(int i = 0; s[i] != '\0'; ++ i){
            char ss = s[i];
            char tt = t[i];
            if(smap.count(ss)){//count是说ss在map中存在返回1。不存在返回0
                if(smap[ss] != tt)    return false;
            }
            else if(tmap.count(tt)){
                if(tmap[tt] != ss)  return false;
            }
            else{
                smap[ss] = tt;
                tmap[tt] = ss;
            }
        }
        return true;
    }


};
// @lc code=end

