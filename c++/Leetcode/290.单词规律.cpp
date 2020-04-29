/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
    // 这题恶心了我半天，在本地跑没事，在网上跑就报错，太恶心了。
    // 算了，还是双映射来吧，方便一点，单映射卡了我半天。
    // 啊，太难受了，踩了好多坑，还好最后双百过了
public:
    bool wordPattern(string pattern, string str) {
        map<string,char> mp1;
        map<char,string> mp2;
        string ans,temp;
        int j=0;
        str+=' ';//因为最后没用空格，所以加一个空格，方便停下来。
        for(int i=0;i<str.size();i++){//首先，不能再在这里面再定义j，会把j变成局部变量，退出循环之后j的值随机了
            if(str[i]==' '){//为空格则考虑映射关系
                if(mp1.count(temp)) ans+=mp1[temp];//如果Mp1中有temp，把对应字符加进ans
                else if(mp2.count(pattern[j])) return false;//如果mp1中没有temp，但mp2中又遇到了之前有过的字符，证明两个不同的字符串映射到了同一个字符上。
                else {//两个Mp中都没有，两个都添加
                    mp2[pattern[j]]=temp;
                    mp1[temp]=pattern[j];//两个分别添加映射
                    ans+=mp1[temp];
                }
                temp="";//重新初始化。
                j++;//每次遇到空格，j也要相应跟着动。
                continue;
            }
            temp+=str[i];//不为空格就往里面加字符。
        }
        return pattern==ans;
    }
};
// @lc code=end

