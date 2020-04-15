/*
 * @lc app=leetcode.cn id=1014 lang=cpp
 *
 * [1014] 最佳观光组合
 */

// @lc code=start
class Solution {
public:
    // 给这个公式变形成A[i]+i+A[j]-j，可以看成是左A[i]+i和右A[j]-j两部分和的最大值。
    int maxScoreSightseeingPair(vector<int>& A) {
        int left=A[0]+0,res=0;//初始i=0
        for(int j=1;j<A.size();j++){
            res=max(res,left+A[j]-j);//更新a[i]+i+a[j]-j的最大值。
            left=max(left,A[j]+j);//更新a[i]+i的最大值，放在left里
        }
        return res;
    }

    // 这道题可以用动态规划解，但是我不会
    int maxScoreSightseeingPair(vector<int>& A) {
        int fn = 0;            // f0
        int tn = A[0] + 0;     // t0
        
        for (int n = 1; n < A.size(); ++n){
            fn = max(fn, tn + A[n] - n);
            tn = max(tn, A[n] + n);
        }
        
        return fn;
    }

    // 暴力循环，在第46个测试用例时超时。
    int maxScoreSightseeingPair(vector<int>& A) {
        int max=0;
        for(int j=1;j<A.size();j++){
            for(int i=0;i<j;i++){
                if(A[i] + A[j] + i - j>max) max=A[i] + A[j] + i - j ;
            }
        }
        return max;
    }
};
// @lc code=end

