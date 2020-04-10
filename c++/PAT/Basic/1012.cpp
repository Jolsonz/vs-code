/* 数字分类
A​1​​ = 能被 5 整除的数字中所有偶数的和；
A​2​​ = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n​1​​−n​2​​+n​3​​−n​4​​⋯；
A​3​​ = 被 5 除后余 2 的数字的个数；
A​4​​ = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A​5​​ = 被 5 除后余 4 的数字中最大数字。
某一类数字不存在要输出N
也是自己做出来的，不过改了好几次，提交了4次
 */
#include<cstdio>
int flage = 1;
int A1(int a){
    if (a%2==0) return a;
    return 0;
}
int A2(int a){
    if (flage==1)
    {
        flage=0;
        return a;
    }
    else
    {
        flage=1;
        return -a;
    }
    
    
}
int main(){
    int N,n;
    int a1=0,a2=0,a3=0,a5=0;
    double sum4=0,a4=0;

    scanf("%d",&N);
    int n3=0,n2=0;
    while (N--)
    {   
        scanf("%d",&n);
        if(n%5==0) a1+=A1(n);
        else if(n%5==1) {a2+=A2(n);n2++;}
        else if(n%5==2) a3++;
        else if(n%5==3) {sum4+=n;n3++;}
        else if(n%5==4) {if(n>a5) a5=n;}
    }

    if (a1==0) printf("N ");
    else printf("%d ",a1);

    if (n2==0) printf("N ");
    else printf("%d ",a2);

    if (a3==0) printf("N ");
    else
    {
        printf("%d ",a3);
    }
    if (n3==0)
    {
        printf("N ");
    }
    else
    {   
        a4=sum4/n3;
        printf("%.1f ",a4);
    }
    if (a5==0)
    {
        printf("N");
    }
    else
    {
        printf("%d",a5);
    }
    return 0;
}