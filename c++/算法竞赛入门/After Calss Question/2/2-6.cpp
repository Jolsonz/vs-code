//  排列
/* 
对这题思路有点不清晰，他提示不必太动脑筋，我反而不太明白，在我看来过程有点复杂
此题解法在印象笔记中有存
采用标志数组解决，建立一个九位数组，先初始化每位为零。每当出现一个数字，其对应的数组元素置为一，最后检查数组是否有零，有零则表示重复了。
 */


#include<cstdio>
#include<cstring>
int i,v;//v记录有多少个数组值变成1了
bool a[10];//ai表示第i个数已经用过了
int main()
{
    for(i=192;i<=327;i++)//第一个数最小192，最大327。其实不知道的情况下简单来说是从123-329的但是算出来是最值就稍微改了下下
    {
        memset(a,0,sizeof(a));v=0;//清零
        a[i%10]=a[i/10%10]=a[i/100]=a[i*2%10]=a[i*2/10%10]=a[i*2/100]=a[i*3%10]=a[i*3/10%10]=a[i*3/100]=1;//统计数字，将1:2:3出现了的数字全都把标志位记1。
        for(int j=1;j<=9;j++) v+=a[j];//v表示1-9这些数字是否全部齐了
        if(v==9) printf("%d %d %d\n",i,i*2,i*3);//如果齐了就输出
    }
return 0;
}