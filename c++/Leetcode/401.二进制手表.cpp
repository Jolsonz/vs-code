/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    // 这题回溯法没整懂
    // 有点像排列组合，但我一开始是没什么思路的。
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for(int i=0;i<12;i++){
            if(count_1(i)==num) ans.push_back(to_string(i)+":00");//这里加个剪枝，可以少一点循环，其实没什么必要
            else
            for(int j=0;j<60;j++){
                if(count_1(i)+count_1(j)==num){//有这么多亮灯
                    ans.push_back(to_string(i)+':'+
                    (j<10? '0'+to_string(j):to_string(j))
                    );
                }
            }
        }
        return ans;

    }
    //计算二进制中1的个数
    int count_1(int n){
        int res=0;
        while(n){
            n=n&(n-1);//这是常见的算一个二进制数中1的个数的算法。
            res++;
        }
        return res;
    }
    
};
// @lc code=end

