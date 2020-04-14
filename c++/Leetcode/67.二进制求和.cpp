/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()>b.size()){
            string ss(a.size()-b.size(),'0');
            b=ss+b;
        }
        else if(a.size()<b.size()){
            string ss(b.size()-a.size(),'0');
            a=ss+a;
        }
        int f=0;//记录进位
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]-'0'+b[i]-'0'+f>1){
                a[i]+=b[i]-'0'+f-2;
                f=1;//给个进位
            }
            else {
                a[i]+=b[i]-'0'+f;
                f=0;
            }
        }
        if(f) a='1'+a;//最后加个1在前面。
        return a;
    }
};
// @lc code=end

