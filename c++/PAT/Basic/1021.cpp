// 1021 个位数统计
// 比较简单，只是简单模拟题

#include<cstdio>
#include<cstring>
int main(){
    char s[1000];
    int a[10]={0};
    scanf("%s",s);
    int len,j;
    len=strlen(s);
    for (int i = 0; i < len; i++)
    {
        j=s[i]-'0';
        a[j]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if(a[i]==0) continue;
        printf("%d:%d\n",i,a[i]);
    }
    return 0;    
}