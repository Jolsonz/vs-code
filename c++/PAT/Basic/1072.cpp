// 1072 开学寄语 (20分)
// 也就是简单模拟，那个查违禁物品可以用set.find()，诶，我觉得这函数挺好用的诶。
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;//n个学生，m个违禁物品
    set<int> forbid;
    cin>>n>>m;
    int t,sum1=0,sum2=0;//分别统计问题的学生的总人数和被查缴物品的总数。
    while(m--){
        cin>>t;
        forbid.insert(t);
    }
    string name;
    while(n--){//n个学生
        int f=0;//标志位,用于表明这个学生是否有带违禁物品
        cin>>name>>k;//k是带了几件物品
        for(int i=0;i<k;i++){
            cin>>t;
            if(forbid.find(t)!=forbid.end()){//有违禁品
                if(f==0){
                    f=1;
                    sum1++;//违禁学生人数
                    sum2++;//违禁品数量
                    printf("%s: %04d",name.c_str(),t);//打印名字哦
                }
                else {printf(" %04d",t);sum2++;}
            } 
        }
        if(f) cout<<endl;//如果带了违禁品，输出一个换行
    }
    cout<<sum1<<' '<<sum2;
    return 0;
}