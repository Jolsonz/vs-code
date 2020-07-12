/*
 * @lc app=leetcode.cn id=443 lang=java
 *
 * [443] 压缩字符串
 */

// @lc code=start
// 我感觉我写麻烦了，时间上是打败了99.9%。但空间上是20%
class Solution {
    public int compress(char[] chars) {
        int count=1;//计数
        char temp = chars[0];//暂定于首个字符
        int j=0;//另外一个指针，因为要原地算法，指着插入位置。
        for(int i= 1 ; i<chars.length ;i++ ){//从第二个字符开始
            if(temp != chars[i]){//两个字母不等，输出前一个字母的结果
                chars[j++] = temp;
                //然后把count的数字转成string,最后一个个读入。
                if(count>1){
                    for(char k : (count+"").toCharArray()){
                        chars[j++]=k;//把该String的每个char都赋值进去
                    }
                }   
                //清零
                count=1;
                temp = chars[i];//转成该字符
            } 
            else{
                count++;
            }
        }
        //另外还有最后一个字母没有输出结果。这个流程还得来一遍
        chars[j++] = temp;
        if(count>1){//count为1是不用输出数字的
            String t = String.valueOf(count);
            for(int k=0;k< t.length();k++){
                chars[j++]=t.charAt(k);//把该String的每个char都赋值进去
            }
        }
        return j;
    }
}
// @lc code=end

