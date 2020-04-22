/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        // 这个就比较简单了，转换过来。
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans=ans*26+(s[i]-'A'+1);
        }
        return ans;
    }
    //法2
    int majorityElement(vector<int>& nums) {
//摩尔投票法,先假设第一个数过半数并设cnt=1；遍历后面的数如果相同则cnt+1，不同则减一，当cnt为0时则更换新的数字为候选数（成立前提：有出现次数大于n/2的数存在）
        int res=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0) {
                res=nums[i];
                cnt++;
            }
            else{
                res==nums[i]?cnt++:cnt--;
            }
        }
        return res;
    }
};
// @lc code=end

