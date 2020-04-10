// 1077 互评成绩计算 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;//分组数和满分，都不超过100
    cin>>n>>m;
    int teacher,t;//teacher是老师评分
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>teacher;  
        for(int j=1;j<n;j++){//n-1个其他组的评分
            cin>>t;
            if(t>=0&&t<=m)//t是合法的
                a.push_back(t);
        }
        sort(a.begin(),a.end());//t先排个序
        int sum=0;
        for(int j=1;j<a.size()-1;j++){//去掉最高最低分
            sum+=a[j];
        }
        double ans=(double)sum/(a.size()-2);//因为去掉了两个。
        ans=(ans+teacher)/2.0;//和教师评分相加除2
        // 四舍五入,cmath里的。            cout<<round(ans)<<endl;
        cout<<(int)(ans+0.5)<<endl;//或者不加cmath，用这个
        a.clear();//这里记得清空vector,不然就在循环体内定义vector
    }
    return 0;
}