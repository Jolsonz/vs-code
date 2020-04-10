// A+B>C，显然暗示用longlong，不然必溢出
//自己写的
#include<stdio.h>
#define ll long long//不要写反成long long ll了

int main(){
    int n,i=1;
    ll A,B,C;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%lld%lld%lld",&A,&B,&C);
        if((A+B)>C) printf("Case #%d: true\n",i);//妈的true打成ture了，还给拼写提示了
        else printf("Case #%d: false\n",i);
        i++;

    }
    return 0;
}
