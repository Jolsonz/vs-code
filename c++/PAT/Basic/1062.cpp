// 最简分数
// 主要是求满足条件的分子。

#include<iostream>
using namespace std;

int gcd(int a, int b){//求最大公约数
    return b == 0 ? a : gcd(b, a % b);//这个写法在算法竞赛入门上也有。
}

int main(){
    int n1,m1,n2,m2,k;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    int f=1;
    for(int i=1;i<k;i++){
        double a=(double)n1/m1,b=(double)i/k,c=(double)n2/m2;//b应该在a和c直接
        if(a>c){//题设没说a>c哦
            double temp;
            temp=c;
            c=a;
            a=temp;
        }
        if(b<=a||b>=c) continue;
        int ans=gcd(i,k);
        if(f&&ans==1){//就是说最大公因数为1
            f=0;
            printf("%d/%d",i,k);//输出分子分母，不带空格
        }
        else if (ans==1)
        {
            printf(" %d/%d",i,k);
        }
    }

    return 0;
}