//水仙花数
#include<stdio.h>

int main(){
    int a ,b ,c ;//分别储存3位数
    for(int n = 100 ; n<= 999 ;n++){
        a = n/100;
        b = n/10%10;
        c = n%10;
        if (n == a*a*a+b*b*b+c*c*c) printf("%d\n",n);
    }
    return 0;
}