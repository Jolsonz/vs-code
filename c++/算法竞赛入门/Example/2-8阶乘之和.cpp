/* 
打开cmd用   echo 输入的数据 | 程序名 
来得到结果
不然输入输出的延时也在里面，不准。
 */

#include<stdio.h>
#include<time.h>
int main(){
    const int mod=1000000;
    int n,s=0;
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
        int F = 1;
        for(int j=1 ; j<=i ; j++)
            F = (F*j%mod);
        s = (s+F)%mod;

    }
    printf("%d\n",s);
    printf("Time used = %.19f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;

}