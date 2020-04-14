/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
// 这是二分法，比较容易想到，比直接遍历快多了
// 另外还有牛顿法（微积分知识），迭代法，调用sqrt()法。
    int mySqrt(int x) {
        long long a=0,b=x/2+1;
        while (a<=b)
        {
            long long mid=(a+b)/2;
            long long res=mid*mid;
            if(res==x) return mid;
            else if(res<x) a=mid+1;
            else b=mid-1;
        }
        return b;//不用减一，因为while循环里，res>x时就减一了。
    }
};
// @lc code=end

