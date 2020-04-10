//倒三角形
#include<stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    while(n>0){
        for (int k = i; k > 0; k--)
        {
           printf(" ");
        }
         
        
        int sum = 2*n-1;//要打印2n-1个#
        while (sum>0)
        {
            printf("#");
            sum--;
        }
        printf("\n");
        n--;//进入下一层
        i++;//下一层空格要加
    }
}