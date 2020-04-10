//子序列的和
// 注意输入过大会溢出，所以要用Longlong定义。

#include<stdio.h>
int main(){
    int k=0;
    long long n,m;
    
    while(scanf("%lld%lld",&n,&m)==2){
    //改成while(scanf("%lld%lld",&n,&m)&&m&&n)不可，这时n=0跳出
    //因为m其中一个为0是不跳出的。要m=n=0才跳出
        k++;
        double sum = 0;
        if(m==n && m==0) break;
        for( ; n<=m ; n++){
            n = double(n);
            sum+= 1.0/(n*n);//通过1.0来强制转换类型，常用
        }
        printf("case %d: %.5f\n",k,sum);
        
    }
    return 0;
}