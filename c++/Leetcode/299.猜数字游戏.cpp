/*
 * @lc app=leetcode.cn id=299 lang=cpp
 *
 * [299] 猜数字游戏
 */

// @lc code=start
class Solution {
    //本质上是个简单问题。
public:
    string getHint(string secret, string guess) {
        int a=0,b=0;
        int c1[10]={},c2[10]={};//记录每个数字的个数
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                a++;
                continue;
            } 
            c1[secret[i]-'0']++;
            c2[guess[i]-'0']++;
        }
        for(int i=0;i<10;i++){
            if(c2[i]<c1[i]) c1[i]=c2[i];//把小的数放进去，说明两个string至少有这么多相同的
            b+=c1[i];
        }
        return to_string(a)+'A'+to_string(b)+'B';

    }
};
// @lc code=end

