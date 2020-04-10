// 判断题
// 实际上最重要的部分是，相同取1，不同取0
#include<iostream>
using namespace std;
int main(){
    int n,q;//分别存几个学生，几道题
    cin>>n>>q;
    int value[q],ans[q],stu[q];//分别存分值和正确答案,还有暂时记录学生的答案
    for(int i=0;i<q;i++){
        cin>>value[i];}
    for(int i=0;i<q;i++){
        cin>>ans[i];}
    while (n--)
    {
        int score=0;//得分
        for(int i=0;i<q;i++){
        cin>>stu[i];
        if(stu[i]==ans[i])
            score+=value[i];
        }
        cout<<score<<endl;
    }
    return 0;
}