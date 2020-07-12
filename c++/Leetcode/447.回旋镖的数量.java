/*
 * @lc app=leetcode.cn id=447 lang=java
 *
 * [447] 回旋镖的数量
 */

// @lc code=start
class Solution {
    public int numberOfBoomerangs(int[][] points) {
        // 注意到假设同一距离出现 n 次，由数字规律可推出回旋镖的数量 sum = n*(n-1)
        int len = points.length;
        int ans = 0;
        HashMap<Double, Integer> map = new HashMap<Double, Integer>();
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (i != j) {
                    double dis = Math.pow(points[i][0] - points[j][0], 2) + Math.pow(points[i][1] - points[j][1], 2);
                    if (!map.containsKey(dis)) {
                        map.put(dis, 1);
                    } else {
                        int n = map.get(dis);
                        ans += 2 * n;
                        map.put(dis, 1 + n);
                    }
                }
            }
            map.clear();
        }
        return ans;
    }
}
// @lc code=end
