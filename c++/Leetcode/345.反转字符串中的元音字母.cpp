/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        // 双指针法。
        // 唉，注意是有大写的。
        int i=0,j=s.size()-1;
        int ascii[128]={0};
        ascii['a']=1;ascii['e']=1;ascii['i']=1;ascii['o']=1;ascii['u']=1;
        ascii['A']=1;ascii['E']=1;ascii['I']=1;ascii['O']=1;ascii['U']=1;
        // 当然，这里可以不开ASCII码表，浪费了大量空间
        // 直接map<char,int> mp把上面的都给放到map里。然后直接mp.count(s[i])即可
        while(i<j){
            if(ascii[s[i]] && ascii[s[j]]){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if(ascii[s[i]]) j--;
            else if(ascii[s[j]]) i++;
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};
// @lc code=end

