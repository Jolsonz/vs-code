// 划拳
#include<cstdio>
int main(){
    int a,b,c,d,n,sum1=0,sum2=0;//甲喊 甲划 乙喊 乙划
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if (a+c==b&&a+c==d) continue;
        if (a+c==b&&a+c!=d) sum2++;
        if (a+c!=b&&a+c==d) sum1++;
    }
    printf("%d %d",sum1,sum2);
    return 0;
}