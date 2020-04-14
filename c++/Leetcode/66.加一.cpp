/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // 显然，要处理进位情况,这也是大整数加减法的策略，注意999这种情况
        int f=1;
        for(int i=digits.size()-1; f && i>=0 ;i--){
            if(digits[i]==9){
                digits[i]=0;//加一变成10，还有进位
            }
            else{
                digits[i]++;
                f=0;
            }
        }
        if(f){//说明最后还有一个进位要加在前面
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
// @lc code=end

