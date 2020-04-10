/*
数数字 UVa1225
用getchar()来得到字符，开一个数组统计，碰到'\n'停下
 */

#include<stdio.h>
#include<string.h>
int main(){
    char b;
    int c,a[10];
    memset(a,0,sizeof(a));
    while((b = getchar())!='\n'){
        c=b-'0';
        a[c]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d has %d \n",i,a[i]);
    }
    
    return 0;
}