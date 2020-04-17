/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(!numRows) return ans;
        // 我总觉得以前写过
        vector<int> before;
        for(int i=0;i<numRows;i++){//需要i行
            vector<int> temp;
            for(int j=0;j<=i;j++){//每行i+1个个数字
                if(j==0 || j==i) temp.push_back(1);//末尾或开始
                else temp.push_back(before[j-1]+before[j]);
            }
            before=temp;//记录数组
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end

