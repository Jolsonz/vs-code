/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    //第19个测试点超时 
    // int is_prime(int n){
    // for (int i = 2; i<= sqrt(n) ; i++)
    //     if(n%i==0) return 0;
    // return 1;        
    // }
    // int countPrimes(int n) {
    //     if(n<=2) return 0;//小于2都没质数
    //     int count=0;
    //     for(int i=3;i<n;i++){
    //         if(is_prime(i)) count++;
    //     }
    //     return count;
    // }

    int countPrimes(int n) {
        int a[n+1];//为啥int a[n+1]={1};给我报错？？
        int count=0;//默认所有数都是质数
        for(int i=2;i<n;i++){
            if(a[i]){
                count++;
                for(int j=2*i;j<n;j+=i){//把质数i的所有小于n的倍数给标记为0，非质数
                    a[j]=0;
                }
            }
        }
        return count;

    }

};
// @lc code=end

