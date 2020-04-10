#include<cstdio>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.3f",(a+b+c)/3.0);//注意输出的肯定变成浮点数了
    return 0;
}
