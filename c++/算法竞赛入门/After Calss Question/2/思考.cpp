
/*测试1

 #include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 2; i <= 2*n; i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}

*/
// 测试2
#include<stdio.h>
int main(){
    double i;
    for ( i = 0; int(i) !=10 ; i+=0.1)//有意思，这个不把i整型话的话会永远进行。
    {
        printf("%.1f\n",i);
    }
    return 0;

}
/* 
此外
for ( i = 0; i !=10.0 ; i+=0.1) 不行
然后我以为浮点数是保留6位小数
用
for ( i = 0; i !=10.000000 ; i+=0.1)也不行
所以干脆int一下i，就可以。
 */


