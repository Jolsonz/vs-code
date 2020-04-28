/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    // 那个脑瘫产品经理出这么多版本
    int firstBadVersion(int n) {
        // 这玩意儿二分查找吧，果然
        int a=0,b=n;
        while(a<b){//最后跳出是a==b的时候
            int mid=a+(b-a)/2;//注意不能写a+b /2 会溢出
            if(isBadVersion(mid)){//是错误版本
                b=mid;//高边界变低；
            }
            else a=mid+1;
        }
        return a;
    }
};
// @lc code=end

