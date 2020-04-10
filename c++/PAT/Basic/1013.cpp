/* 数素数
先把1-1000个素数求出来放在数组里，也就是所谓的打表
自己写的*/
#include<cstdio>
#include<cmath>
int is_prime(int n){
    for (int i = 2; i<= sqrt(n) ; i++)//写i*i<=n也可以
        if(n%i==0) return 0;
    return 1;        
}
int a[10050]={0};
int main(){
    int n=2,i=1,b,c;
    scanf("%d%d",&b,&c);
    while(a[10030]==0)
    {
        if (is_prime(n))
        {
            a[i++]=n;
        }
        n++;
    }
    int sum=1;
    for (int j = b;j<=c;j++)
    {
        if (j==c)
        {
            printf("%d",a[j]);//最后一个后面不能带空格
            break;
        }
        
        if (sum%10==0)
        {
            printf("%d\n",a[j]);
            sum=1;
            continue;
        }
        printf("%d ",a[j]);
        sum++;
       
    }
    return 0;
}