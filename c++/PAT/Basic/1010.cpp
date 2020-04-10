// 设计函数求一元多项式的导数。
// 自己写的，思路比较直白，就是直接模拟。

#include<stdio.h>

int main(){
    int a[1010] = {0};
    int n,i=0;
    while (scanf("%d",&n) != EOF)
    {
        a[i++]=n;
    }
    for ( i = 0; i < 1010; i=i+2)
    {
        a[i]=a[i]*a[i+1];
        if(a[i+1]==0) break;//如果系数为0，说明到了最低的一个数了，0不能减成负数了。
        a[i+1]--;
    }
    if(a[0]==0){
        printf("0 0");//就是全是0，需要输出这个
        return 0;
    }
    for (i = 0; i < 1000; i+=2)
    {
        if(a[i+2]==0 && a[i+3]==0){
            printf("%d %d",a[i],a[i+1]);//最后一个不带空格
            break;
        }
        printf("%d %d ",a[i],a[i+1]);

    }
    return 0;
    
}