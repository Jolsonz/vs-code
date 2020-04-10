/* 部分a+b
简单题，自己解决了 */
#include<cstdio>
int main(){
    int A,DA,B,DB;
    scanf("%d%d%d%d",&A,&DA,&B,&DB);
    int sum1=0,sum2=0;
    while(A)
    {
        if(A%10==DA) sum1=sum1*10+DA;
        A/=10;
    }
    while (B)
    {
        if(B%10==DB) sum2=sum2*10+DB;
        B/=10;
    }
    printf("%d",sum1+sum2);
}