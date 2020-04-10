#include <stdio.h>
typedef long ll;
ll getgcd(ll a, ll b);
void printfrac(ll a, ll b);

int main (void) {
    ll a1,b1,a2,b2;
    char op[4] = {'+', '-', '*', '/'};
    int i;
    scanf("%ld/%ld %ld/%ld", &a1, &b1, &a2, &b2);
    for(i = 0; i < 4; i++) {
        printfrac(a1, b1);
        printf(" %c ", op[i]);
        printfrac(a2, b2);
        printf(" = ");
        // 我们使用的是ll, 这里不用通分, 直接计算
        switch (op[i]) {
            case '+':
                printfrac(a1 * b2 + a2 * b1, b1 * b2); 
                break;
            case '-':
                printfrac(a1 * b2 - a2 * b1, b1 * b2);
                break;
            case '*':
                printfrac(a1 * a2, b1 * b2);
                break;
            case '/':
                printfrac(a1 * b2, b1 * a2);
                break;
        }
        printf("\n");
    }

    return 0;
}
ll getgcd(ll a, ll b){
    return b == 0 ? a : getgcd(b, a % b);//这个写法在算法竞赛入门上也有。
}
/*
    这里的a, b有多种情况, 正正, 正负, 负负都有可能
    再下面判断符号时, 充分利用了负负得正的思想
*/
void printfrac (ll a, ll b) {
    if (b == 0) {
        printf("Inf");
        return;
    }
    int sign = 1;
    ll gcd;
    if (a < 0) {
        a = -a;
        sign = sign * -1;
    }
    if (b < 0) {
        b = -b;
        sign = sign * -1;
    }
    gcd = getgcd(a, b);
    a = a / gcd;
    b = b / gcd;
    if (sign == -1) printf("(-");
    if (b == 1) printf("%ld", a);   // 整数
    else if (a > b) printf("%ld %ld/%ld", a / b, a % b, b);
    else printf("%ld/%ld", a, b); // a < b
    if (sign == -1) printf(")");
}