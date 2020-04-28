/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    // 通过，但是比较耗时
    // 另外一个思路是，每次遇到0,count++,其后的元素都往前移count个，最后的几个元素都变成0
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it == 0){
                nums.erase(it);
                it--;//因为要保留在原地，抵消后面的加
                count++;
            }
        }
        while(count--){
            nums.push_back(0);
        }
    }
    // 应该更快
    void moveZeroes(vector<int>& nums) {
        int i = 0,j = 0;
        for(i = 0 ; i < nums.size(); i++)
            if(nums[i] != 0) nums[j++] = nums[i];
        while(j < nums.size())
            nums[j++] = 0;
}
};
// @lc code=end

