/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome1(int x) {//????????????????
        if(x<0) return false;
        string s=to_string(x),t;
        t=s;
        reverse(t.begin(),t.end());
        if(t==s) return true;
        return false;
    }
    bool isPalindrome(int x) {//??????????long long ????????
        if(x<0) return false;
        long long t,sum=0,k=x;
        while(x){
            t=x%10;
            x/=10;
            sum=sum*10+t;
        }
        return sum==k;
    }
};
// @lc code=end

