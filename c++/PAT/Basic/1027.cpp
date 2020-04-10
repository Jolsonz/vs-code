// 打印沙漏
// 自己写的，倒三角以前写过，仿照着写一个正三角就行。但是觉得写得不简洁，臃肿
#include<cstdio>
void zhen(int n,char c){
    int i=n-2;//正三角，空格一开始是n-2个，跳过一个字符的那个
    n--;//跳过一个字符的那个
    int j=3;
    while (n--)
    {
        for(int k=i;k>0;k--){
            printf(" ");
        }
        int sum = j;
        while(sum>0){
            printf("%c",c);
            sum--;
        }
        printf("\n");
        i--;//下一层空格要减
        j+=2;
    }
}
void dao(int n,char c){
    int i=0;
    while(n>0){
        for (int k = i; k > 0; k--)
        {
           printf(" ");
        }
        int sum = 2*n-1;//要打印2n-1个#
        while (sum>0)
        {
            printf("%c",c);
            sum--;
        }
        printf("\n");
        n--;//进入下一层
        i++;//下一层空格要加
    }
}
int main(){
    int n,rest,len=1;//len放倒沙漏的长度，那么正沙漏当然长len-1
    char c;
    scanf("%d %c",&n,&c);//n个数，c是打印的字符
    while(len*len*2-1<=n){//等差数列求出来的。
        len++;
    }
    len--;
    // printf("len= %d\n",len);
    rest=n-(len*len*2-1);//存多余的符号数
    dao(len,c);
    zhen(len,c);
    printf("%d",rest);
    return 0;    
}