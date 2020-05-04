/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        // 大整正数加法，老套路了
        if(num1.size()<num2.size()) return addStrings(num2,num1);//第一个要大于第二个
        if(num1.size()!=num2.size()){
            string ss(num1.size()-num2.size(),'0');//记错了，应该这么写的
            num2=ss+num2;
        }
        int carry=0;//进位
        for(int i=num1.size()-1;i>=0;i--){//从后往前加
            int t=num1[i]-'0'+num2[i]-'0'+carry;
            if(t>9){ t-=10;carry=1;}
            else carry=0;
            num1[i]=t+'0';
        }
        if(carry) num1='1'+num1;
        return num1;
    }
};
// @lc code=end

