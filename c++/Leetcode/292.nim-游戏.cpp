/*
 * @lc app=leetcode.cn id=292 lang=cpp
 *
 * [292] Nim 游戏
 */

// @lc code=start
class Solution {
public:
    bool canWinNim(int n) {
        //这个游戏我貌似玩过，注意到每一步都是最优解
        // 目标，拿到4。进一步想拿到4，目标拿到8，所以只要拿到4的倍数，就赢了。
        return n%4;//所以一开始不能是4的倍数，
    }
};
// @lc code=end

