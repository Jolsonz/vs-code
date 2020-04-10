// 分数化小数
/*
学到一个新东西
printf("%.*f",n,value); // n表示小数的位数，value表示结果

另外 1/6=0.1666666666667这样无限循环小数
保留小数遵循四舍五入

*/

#include<stdio.h>
int main(){
    int a,b,c;
    int n = 0;
    while (scanf("%d%d%d",&a,&b,&c))
    {   
        n++;
        if(a==b&&a==c&a==0) break;//跳出条件
        double ans = 0;
        ans = double(a)/b;
        // printf("ans = %f\n",ans);
        printf("case %d: %.*f\n",n,c,ans);
        
    }
    return 0;
    


}