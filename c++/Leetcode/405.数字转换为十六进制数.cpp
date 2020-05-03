/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    // 写的极好，我写不出来。所有数字本质上都是存的二进制在计算机里，所以不需要额外处理
    string toHex(int num) {
        if (num == 0) return "0";
        string hex = "0123456789abcdef", ans = "";
        while(num && ans.size()<8){
            // num为正数时，右移最终num会变成0
            // num为负数时，补码表示，右移左边一直都是111111这种，所以要在ans.size()=8时跳出
            ans = hex[num & 0xf] + ans;//每个数都加在左边，
            num >>=  4; //右移四位，相当于除16
        }
        return ans;
    }
};
// @lc code=end

