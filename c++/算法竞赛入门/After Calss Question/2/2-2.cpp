// 韩信点兵

#include<stdio.h>

int main(){
    int a,b,c,i;
    int n=0;
    while(scanf("%d %d %d",&a,&b,&c)==3){//注意这个=3哦，不能是=1
    for (i=10 ;i<=100 ;i++){
        if( i%3==a && i%5==b && i%7==c){
            n++;
            printf("case %d : %d\n",n,i);
            break;
        }
    }
   if (i==101) {
        n++;
        printf("case %d : No answer\n",n);
        }

    }
}

