// P39 开灯问题

#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn];

int main(){
    int n,k ,first = 1;//n盏灯，k个人
    memset(a,0,sizeof(a));//一开始全是关的，为0
    scanf("%d%d",&n,&k);
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <=n ; j++)
            if(j%i==0) a[j]=!a[j];
    for (int i = 1; i <=n ; i++)
    {
        if(a[i]){//如果a[i]==1就表示灯亮着，要输出。
            if(first) first=0;
            else printf(" ");
            printf("%d",i); 
        }
    }
    return 0;
        
        
    
    
}