/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;//符号栈
        for(int i=0;i<s.size();i++){
            switch (s[i]){
            case '{':
                st.push(s[i]);
                break;
            case '[':
                st.push(s[i]);
                break;
            case '(':
                st.push(s[i]);
                break;
            case '}':
                if(st.empty()) return false;//注意有"["这种例子
                if(st.top()=='{') st.pop();
                else return false;
                break;
            case ']':
                if(st.empty()) return false;
                if(st.top()=='[') st.pop();
                else return false;
                break;
            case ')':
                if(st.empty()) return false;
                if(st.top()=='(') st.pop();
                else return false;
                break;
            default:
                break;
            }
        }
        if(st.empty()) return true;//注意有可能栈里还没匹配完
        return false;
    }
};
// @lc code=end

