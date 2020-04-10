// 编程团体赛，打表比较方便
// 比较简单。
#include<stdio.h>
struct student
{
    int team,mate,score;
};

int main(){
    int N,max_team=0,max_score=0;
    int t[1005]={0};
    scanf("%d",&N);
    student a;
    while (N--)
    {
        scanf("%d-%d %d",&a.team,&a.mate,&a.score);
        t[a.team]+=a.score;
    }
    for (int i = 0; i < 1005; i++)
    {
        if(t[i]>max_score){
            max_team=i;
            max_score=t[i];
        }
    }
    printf("%d %d",max_team,max_score);
    return 0;
}