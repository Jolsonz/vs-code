#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    while(a--)
    {
        printf("B");
    }
    while (b--)
    {
        printf("S");
    }
    int i=1;
    while (c--)
    {
        printf("%d",i);
        i++;
    }
    
    return 0;
}