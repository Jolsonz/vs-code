/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
    //用循环它不香么？ 
public:
    int addDigits(int num) {
        while(num>9){
            int temp=0;
            while(num){
                temp+=num%10;
                num/=10;
            }
            num=temp;
        }
        return num;
    }
};
// @lc code=end

