/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;//考虑为空的情况
        int len=1,temp=nums[0];//不空的话默认长度为1，从第一个比起
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp){
                nums[len]=nums[i];//把后面的改成相应的值
                len++;
                temp=nums[i];
            }
        }
        return len;
    }
    /* 另外有个写法比较简洁，思路其实是一样的，当然，也可以用vector自带的erase，不过没必要
    这也是典型的双指针写法。
    int removeDuplicates(vector<int>& nums) {
	if (nums.size() < 2) return nums.size();
	int j = 0;
	for (int i = 1; i < nums.size(); i++)
		if (nums[j] != nums[i]) nums[++j] = nums[i];
	return ++j;
    }
    它这里优点在于，没有用额外的变量。
} */

    //另外有个一行解法，用到stl的函数。
    // return unique(nums.begin(), nums.end()) - nums.begin();
};
// @lc code=end

