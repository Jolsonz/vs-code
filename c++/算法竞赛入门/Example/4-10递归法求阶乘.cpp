#include<stdio.h>
#define LL long long

LL f(LL n){
    return n ==0 ? 1 : f(n-1)*n; 
}

int main(){
    while (1)
    {
    LL i;
    scanf("%lld",&i);
    printf("%lld\n",f(i));//有个问题n=17以及之后都会溢出
    }
    return 0;
}
// long long 输入的结果和int输入的结果不一样诶。long long 会在n=21时溢出
/* 
更有趣的是，你输入1000000000，再去调试，会发现-栈溢出(stack overflow)
每次递归调用需要往调用栈里增加一个帧栈，久而久之就溢出了。
win10的一个栈16MB大小
不过，这不一定是递归调用太多，也可能是局部变量太大
这也是建议把大数组放在main函数外的原因
*/
