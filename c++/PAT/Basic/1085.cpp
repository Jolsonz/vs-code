// 1085 PAT单位排行
// 基本上是自己写的，和柳的思虑相同。
// map对应的int ,double都会自动置初始值为0,不用你去置初值。
// ans.push_back(school{it->first,(int)it->second,m2[it->first]})，可以这样直接压入一个结构体元素到vector
#include<bits/stdc++.h>
using namespace std;
struct school{
    string name;
    int score,num;//分数，人数
};
bool cmp(school a,school b){
    if(a.score!=b.score) return a.score>b.score;//按分数降序
    else if(a.num!=b.num) return a.num<b.num;//分数同，按考生人数升序
    else return a.name<b.name;//分数同，考生人数同，按名字字典序升序。
}
int main() {
    int n;
    cin>>n;
    getchar();//读入回车
    map<string,double> m1;//对应学校与总分的关系
    map<string,int> m2;//学校对应参赛人数。
    while(n--){
        string a,c;
        int b;//得分
        cin>>a>>b>>c;
        getchar();//读入回车
        // 有个问题，c中的大写要全转小写
        for(int i=0;i<c.size();i++){
            if(c[i]>='A'&&c[i]<='Z') c[i]=c[i]+32;//'A'比'a'少32
        }
/*         for(int i=0;i<c.size();i++)
            c[i]= tolower(c[i]); 
            用这个也可以，全转成小写
            */
        if(a[0]=='B') {m1[c]+=b/1.5;m2[c]++;}
        else if(a[0]=='A') {m1[c]+=b;m2[c]++;}
        else if(a[0]=='T') {m1[c]+=b*1.5;m2[c]++;}
    }
    vector<school> ans;
    for(auto it=m1.begin();it!=m1.end();it++){//然后要把map里的东西放到ans里去。
        ans.push_back(school{it->first,(int)it->second,m2[it->first]});//压入姓名，得分，参赛人数到ans中
    }
    sort(ans.begin(),ans.end(),cmp);//排好序
    int rank=0,pres=-1;//pres记录前一个的分数
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        if(pres!=ans[i].score) rank=i+1;
        pres=ans[i].score;
        printf("%d %s %d %d\n",rank,(ans[i].name).c_str(),ans[i].score,ans[i].num);
    }
    return 0;
}