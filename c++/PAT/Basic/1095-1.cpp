// 几个方面解决超时问题，我的算法还是没问题的，这个也是自己改的，参考了别人的建议。
/* 
排序传参建议用引用传参，大量节省时间
全改用scanf,printf
去掉了之前的substr()操作，大量节省时间，substr到最后需要的时候做
我又试了switch改成if else 证明无影响
极限时间，最后一个样例199ms，我试了把有些地方改成cin，超时。
最后一个样例好像有点吃服务器的状态，那个const加不加都行，反正都可能超时，199ms，但有时候状态好又是150ms
*/
#include<bits/stdc++.h>
using namespace std;
struct student{//存考生类型
    string str;
    int score;//存成绩
};
struct room{//专门为了case3设计的，用于排序的，
    string where;//考场
    int num;//人数

};
bool cmp1(const student &a, const student &b){//按分数递减，对于分数并列的考生，按其准考证号的字典序递增输出
    if(a.score!=b.score) return a.score>b.score;//分数递减
    else return a.str<b.str;
}
bool cmp2(const room &a,const room &b){
    if(a.num!=b.num) return a.num>b.num;
    else return a.where<b.where;
}
int main() {
    // ios::sync_with_stdio(false);//没必要加，全改用scanf了
    int n,m;
    scanf("%d %d",&n,&m);
    vector<student> stu;//存学生信息
    for(int i=0;i<n;i++){//输入数据
        string s;
        s.resize(13);//用scanf必须声明长度先.
        int Score;
        scanf("%s %d\n",&s[0],&Score);
        stu.push_back(student{s,Score});
    }
    for(int j=1;j<=m;j++){
        scanf("%d",&n);
        switch (n){//如果查询无结果还要输出NA
        case 1:{//按分数非升序输出某个指定级别的考生的成绩
            char s;
            scanf(" %c",&s);//先读入那个空格
            int f=0;//为1证明有输出
            printf("Case %d: %d %c\n",j,n,s);
            sort(stu.begin(),stu.end(),cmp1);//排序
            for(int i=0;i<stu.size();i++){
                if(stu[i].str[0]==s){
                    f=1;
                    cout<<stu[i].str<<' '<<stu[i].score<<endl;
                }
            }
            if(f==0) printf("NA\n");
            break;
        }
        case 2:{//表示要求将某指定考场的考生人数和总分统计输出，对应的 指令 则给出指定考场的编号；
            int sum1=0,sum2=0;//sum1记录该考场人数，sum2记录总分
            string classroom;
            classroom.resize(3);
            scanf("%s",&classroom[0]);
            printf("Case %d: %d %s\n",j,n,classroom.c_str());
            for(int i=0;i<stu.size();i++){
                if(stu[i].str.substr(1,3)==classroom){
                    sum1++;
                    sum2+=stu[i].score;
                }
            }
            if(sum1==0){//没这个考场
                printf("NA\n");
                break;
            }
            printf("%d %d\n",sum1,sum2);
            break;
        }
        case 3:{//要求将某指定日期的考生人数  分考场  统计输出,输出按人数非递增顺序，格式为 考场编号 总人数。若人数并列则按考场编号递增顺序输出。
            string date;
            date.resize(6);
            scanf("%s",&date[0]);
            printf("Case %d: %d %s\n",j,n,date.c_str());
            unordered_map<string,int> mp;//搞对应关系
            for(int i=0;i<stu.size();i++){
                if(stu[i].str.substr(4,6)==date) mp[stu[i].str.substr(1,3)]++;
            }
            if(mp.size()==0){//证明无答案
                printf("NA\n");
                break;
            }
            vector<room> f;
            for(auto it=mp.begin();it!=mp.end();it++){
                f.push_back(room{it->first,it->second});
            }
            sort(f.begin(),f.end(),cmp2);
            for(int i=0;i<f.size();i++)
                printf("%s %d\n",f[i].where.c_str(),f[i].num);
                // cout<<f[i].where<<' '<<f[i].num<<endl;
            break;}
        }
    }
    return 0;
}