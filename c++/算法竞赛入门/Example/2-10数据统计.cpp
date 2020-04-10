//统计输入的最大值，最小值，平均值
//这程序不能成功运行，起码data.out输出不出东西。
//话说我不能像Linux一样用管道符重定向来输出么。
//以后有空探究一下文件输入输出的问题。
#include<stdio.h>
#define LOCAL
#define INF 1000000000
int main()
{
#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    int x, n=0 , min = INF, max = -INF , s=0;
    while (scanf("%d",&x)==1)
    {
        s = s+x;//s是累加所有值
        if (x<min) min = x;
        if (x>max) max = x;
        printf("x = %d , max = %d , min = %d\n",x,max,min);
        n++;

    }
    printf("%d %d %.3f\n", min ,max , double(s/n));
    return 0;

}