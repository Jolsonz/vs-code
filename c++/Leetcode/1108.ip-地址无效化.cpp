/*
 * @lc app=leetcode.cn id=1108 lang=cpp
 *
 * [1108] IP 地址无效化
 */

// @lc code=start
class Solution {
public:
    string defangIPaddr(string address) {
        // 注意insert(pos,string)只能接受string的拼接。
        string s1="[",s2="]";//这里定义char不行。
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                address.insert(++i,s2);
                address.insert(--i,s1);
                i++;
            }
        }
        return address;
    }
};
// @lc code=end

