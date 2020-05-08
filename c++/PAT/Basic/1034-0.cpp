// 1034 有理数四则运算
// 测试点2通过不了，原因不明。
// void内部要提前跳出不能用break;要用retrue;
// 需要一个加法函数,先通分,再加,再通过最大公约数化简,再输出有理数形式  减法把第二个是数输入-a2即可
// 需要一个乘法函数，乘了找最大公约数化简，再输出有理数形式，除法倒过来输入即可
// 输出有理数形式可以写个函数，比较都要用。
// 注意输出必须是有理数形式，分母为0要输出Inf
#include <iostream>
#include <cmath>
using namespace std;
typedef long long int  ll;//我tm就不明白，这里用long long为啥输出的不对，编译器问题么，在PTA提交页面是对的
//辗转相除法 求最大公约数 
ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);//这个写法在算法竞赛入门上也有。
}
// out这个函数要放在前面，不然后面调用的时候会说他没有申明
void out(ll a,ll b){//这个是化成有理数形式的函数,能化成整数要变成整数
    if(b<0){a=-a;b=-b;}//分母不能为负
    if(a%b==0){//表示能化成整数，能整除。
        if(!a) {cout<<'0';return;}//a为0的情况 
        // a不为0
        if(a>=0) cout<<a/b;
        else cout<<'('<<a/b<<')';
    }
    else if(abs(a)<b){//真分数，还是要化简
        ll c=gcd(abs(a),abs(b));
        a=a/c;b=b/c;
        if(a>=0) cout<<a<<'/'<<b;
        else cout<<'('<<a<<'/'<<b<<')';
    }
    else{//假分数,负数要跟着d
        ll d=a/b;
        a=abs(a)-abs(d)*abs(b);
        if(d>0) cout<<d<<' '<<a<<'/'<<b;
        else cout<<'('<<d<<' '<<abs(a)<<'/'<<abs(b)<<')';
    }
    return;
}
void chen(ll a1,ll b1,ll a2,ll b2){
    if(!b1 || !b2){//如果有一个分母为0
        cout<<"Inf";
        return;
    }
    ll a,b,c;//c最大公约数
    c=gcd(abs(a1),abs(b1));
    a1=a1/c;b1=b1/c;
    c=gcd(abs(a2),abs(b2));
    a2=a2/c;b2=b2/c;
    c=gcd(abs(a1),abs(b2));
    a1=a1/c;b2=b2/c;
    c=gcd(abs(a2),abs(b1));
    a2=a2/c;b1=b1/c;

    a=a1*a2;
    b=b1*b2;//新分子分母
    c=gcd(abs(a),abs(b));//可能是负数，取绝对值
    a=a/c;
    b=b/c;
    out(a,b);//再输出
    return;
}
void jia(ll a1,ll b1,ll a2,ll b2){
    if(!b1||!b2){//如果有一个分母为0
        cout<<"Inf";
        return;
    }
    if(!a1) {out(a2,b2);return;}//a1为0
    if(!a2) {out(a1,b1);return;}
    ll a,b,c;//c最大公约数
    c=gcd(abs(a1),abs(b1));
    a1=a1/c;b1=b1/c;
    c=gcd(abs(a2),abs(b2));
    a2=a2/c;b2=b2/c;
    c=gcd(abs(a1),abs(b2));
    a1=a1/c;b2=b2/c;
    c=gcd(abs(a2),abs(b1));
    a2=a2/c;b1=b1/c;
    b=b1*b2;
    a=a1*b2+a2*b1;//通分
    c=gcd(abs(a),b);
    a=a/c;
    b=b/c;
    out(a,b);
    return;
}
int main(){
    ll a1,b1,a2,b2;
    scanf("%ld/%ld %ld/%ld", &a1, &b1, &a2, &b2);
    out(a1,b1);cout<<" + ";out(a2,b2);cout<<" = ";jia(a1,b1,a2,b2);cout<<endl;
    out(a1,b1);cout<<" - ";out(a2,b2);cout<<" = ";jia(a1,b1,-a2,b2);cout<<endl;
    out(a1,b1);cout<<" * ";out(a2,b2);cout<<" = ";chen(a1,b1,a2,b2);cout<<endl;
    out(a1,b1);cout<<" / ";out(a2,b2);cout<<" = ";chen(a1,b1,b2,a2);cout<<endl;//b2 a2是反的。
    return 0;
}