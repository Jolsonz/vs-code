#include<bits/stdc++.h>
using namespace std;
struct student{//存考生类型
    char Type;//表类型
    string where,time,id;//考场，日期，考生号
    int score;//存成绩
};
struct room{//专门为了case3设计的，用于排序的，
    string where;//考场
    int num;//人数

};
bool cmp1(student a, student b){//按分数递减，对于分数并列的考生，按其准考证号的字典序递增输出
    if(a.score!=b.score) return a.score>b.score;//分数递减
    else return a.where+a.time+a.id<b.where+b.time+b.id;
}
bool cmp2(room a,room b){
    if(a.num!=b.num) return a.num>b.num;
    else return a.where<b.where;
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<student> stu;//存学生信息
    for(int i=0;i<n;i++){//输入数据
        string s;
        int Score;
        cin>>s>>Score;
        student t;//暂存数据
        t.Type=s[0];
        t.where=s.substr(1,3);
        t.time=s.substr(4,6);
        t.id=s.substr(10,3);
        t.score=Score;
        stu.push_back(t);
    }
    for(int j=1;j<=m;j++){
        getchar();//读入回车
        cin>>n;
        switch (n){//如果查询无结果还要输出NA
        case 1:{//按分数非升序输出某个指定级别的考生的成绩
            scanf(" ");//先读入那个空格
            char s;
            cin>>s;
            int f=0;//为1证明有输出
            printf("Case %d: %d %c\n",j,n,s);
            sort(stu.begin(),stu.end(),cmp1);//排序
            for(int i=0;i<stu.size();i++){
                if(stu[i].Type==s){
                    f=1;
                    cout<<stu[i].Type<<stu[i].where+stu[i].time+stu[i].id<<' '<<stu[i].score<<endl;
                }
            }
            if(f==0) cout<<"NA"<<endl;
            break;
        }
        case 2:{//表示要求将某指定考场的考生人数和总分统计输出，对应的 指令 则给出指定考场的编号；
            int sum1=0,sum2=0;//sum1记录该考场人数，sum2记录总分
            string classroom;
            cin>>classroom;//考场的编号
            printf("Case %d: %d %s\n",j,n,classroom.c_str());
            for(int i=0;i<stu.size();i++){
                if(stu[i].where==classroom){
                    sum1++;
                    sum2+=stu[i].score;
                }
            }
            if(sum1==0){//没这个考场
                cout<<"NA"<<endl;
                break;
            }
            printf("%d %d\n",sum1,sum2);
            break;
        }
        case 3:{//要求将某指定日期的考生人数  分考场  统计输出,输出按人数非递增顺序，格式为 考场编号 总人数。若人数并列则按考场编号递增顺序输出。
            string date;
            cin>>date;
            printf("Case %d: %d %s\n",j,n,date.c_str());
            unordered_map<string,int> mp;//搞对应关系
            for(int i=0;i<stu.size();i++){
                if(stu[i].time==date) mp[stu[i].where]++;
            }
            if(mp.size()==0){//证明无答案
                cout<<"NA"<<endl;
                break;
            }
            vector<room> f;
            for(auto it=mp.begin();it!=mp.end();it++){
                f.push_back(room{it->first,it->second});
            }
            sort(f.begin(),f.end(),cmp2);
            for(int i=0;i<f.size();i++)
                cout<<f[i].where<<' '<<f[i].num<<endl;
            break;}
        }
    }
    return 0;
}
