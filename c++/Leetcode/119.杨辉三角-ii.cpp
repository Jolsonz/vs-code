/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    // 上一题的变种，这都没什么难的。
    vector<int> getRow(int numRows) {
        vector<int> before;
        for(int i=0;i<=numRows;i++){//需要i行
            vector<int> temp;
            for(int j=0;j<=i;j++){//每行i+1个个数字
                if(j==0 || j==i) temp.push_back(1);//末尾或开始
                else temp.push_back(before[j-1]+before[j]);
            }
            before=temp;//记录数组
        }
        return before;
    }
};
// @lc code=end

