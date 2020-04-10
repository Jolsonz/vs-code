// 1090 危险品装箱 (25分)
// 我的想法是用两个map来解决问题，不过这样子两个map都要遍历，蛮麻烦
// 借鉴的柳的，难点在想到用map<int,vector<int>> m;来存不兼容货物。以及打表存每个仓库的货物号码，方便后面比对。
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n1,n2;
    cin>>n1>>n2;
    map<int,vector<int>> m;//来存每一个货物的不兼容货物
    int a,b;
    while(n1--){//把所有不兼容的玩意儿全塞进去
        cin>>a>>b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    while(n2--){
        cin>>a;//代表多少个集装箱
        int f=0,d[100000]={0};
        vector<int> v(a);//存物品编号
        for(int i=0;i<a;i++){
            cin>>v[i];//输入
            d[v[i]]=1;//表示该编号货物存在，方便后面查表对比是不是不兼容的。
        }
        for(int i=0;i<a;i++)
            for(int j=0;j<m[v[i]].size();j++)//v[i]是物品编码，m[v[i]].size()就是这件物品的冲突物品个数
                if(d[m[v[i]][j]]==1)//这个是真的难想到。。
                    f=1;
        printf("%s\n",f?"No":"Yes");//这个三目运算符也挺可以的
    }
    return 0;
}