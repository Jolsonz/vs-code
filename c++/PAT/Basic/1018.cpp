// 石头剪刀布
// 自己写的
// C锤子，J剪刀,B布
// 1.注意接受换行符
// 2.注意字典序
#include<cstdio>
char getmax(int s[]){
    int max=0,i;
    for(i=0;i<3;i++){
        if(s[i]>max) max=s[i];
    }
    for (i = 0; i < 3; i++)
    {
        if(max==s[i]) break;
    }
    if(i==0) return 'B';
    if(i==1) return 'C';
    if(i==2) return 'J';
    }
int main(){
    int N,a[3]={0},b[3]={0};//分别储存三种不同的手势(BCJ)胜利的次数,因为如果结果相同要按字典序输出
    char A,B;//A,B的手势
    int s1=0,s2=0,p=0;//s1甲胜，s2甲负（乙胜），p平
    scanf("%d",&N);
    getchar();//接受换行，不然这个换行会到A里面
    while (N--)
    {
        scanf("%c %c",&A,&B);
        if(A==B) p++;
        else if(A=='C'){
            if(B=='J') {s1++;a[1]++;}
            if(B=='B') {s2++;b[0]++;}
        }
        else if(A=='B'){
            if(B=='J') {s2++;b[2]++;}
            if(B=='C') {s1++;a[0]++;}
        }
        else if(A=='J'){
            if(B=='C') {s2++;b[1]++;}
            if(B=='B') {s1++;a[2]++;}
        }
        getchar();//接受换行，不然会到下一个A里面
    }
    printf("%d %d %d\n",s1,p,s2);
    printf("%d %d %d\n",s2,p,s1);
    printf("%c %c",getmax(a),getmax(b));//这个用法也比较方便。
    return 0;
}