// 集体照
// vector<string> ans(m) 体会这个的好处，是真的方便。
// 这个while循环的交替插左边右边也值得反复体会。
#include<bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int h;
};
bool cmp(student a,student b){
    return a.h!=b.h ? a.h>b.h:a.name<b.name;//身高相同按照字典序排
}
int main() {
    int n,k;//k排,n个人
    cin>>n>>k;
    student stu[n];
    for(int i=0;i<n;i++){
        cin>>stu[i].name>>stu[i].h;//输入数据先
    }
    sort(stu,stu+n,cmp);//先按要求排好序

    int t=0,row=k,m;//row计循环次数,m用于记每排多少人，最后一排人数与前面可能不同，t记录已经排好了多少人。
    while(row){//对每一排
        if(row==k) m=n/k+n%k;
        else m=n/k;
        vector<string> ans(m);//ans初始化为含有m个为0的string，这样后面才可以直接赋值，不然ans为空，不能直接赋值
        ans[m/2]=stu[t].name;//最高者站中间
        // 然后插左边的
        int j=m/2-1;
        for(int i=t+1 ;i< t+m; i+=2){
            ans[j--]=stu[i].name;
        }
        // 右边一列
        j=m/2+1;
        for(int i=t+2 ;i<t+m;i+=2){
            ans[j++]=stu[i].name;
        }
        //这一趟之后 stu[t+m]这个位置的数没有插入。所以更新t
        t=t+m;//t的值要变。
        cout<<ans[0];
        for(int i=1;i<m;i++){
            cout<<' '<<ans[i];
        }
        cout<<endl;
        row--;
    }
    return 0;
}