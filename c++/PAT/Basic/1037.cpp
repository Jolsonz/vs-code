// 1037 在霍格沃茨找零钱
// 用scanf比较好应付这种输入要求
// 就是判断的条件多了一点。。我怀疑有更好的解法。
#include<cstdio>
void p(int A,int B,int C,int a,int b,int c){
    int g,s,k;
    if(C-c<0){B--;k=C-c+29;}
    else k=C-c;
    if(B-b<0){A--;s=B-b+17;}
    else s=B-b;
    g=A-a;
    printf("%d.%d.%d",g,s,k);
}
int main(){
    int g1,g2,s1,s2,k1,k2;//1中的是应付，2中的是实付
    scanf("%d.%d.%d",&g1,&s1,&k1);
    scanf("%d.%d.%d",&g2,&s2,&k2);
    // 如果钱没带够，应输出负数,所以应该要先比较1和2哪个大
    if(g2>g1) p(g2,s2,k2,g1,s1,k1);
    else if(g2<g1){printf("-");p(g1,s1,k1,g2,s2,k2);}
    else{
        if(s2>s1) p(g2,s2,k2,g1,s1,k1);
        else if(s1>s2){printf("-");p(g1,s1,k1,g2,s2,k2);}
        else{
            if(k2>k1) p(g2,s2,k2,g1,s1,k1);
            else if(k1>k2){printf("-");p(g1,s1,k1,g2,s2,k2);}
            else printf("0.0.0");
        }
    }
    return 0;
}