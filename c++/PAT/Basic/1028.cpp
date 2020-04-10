// 1028 人口普查
// string可以按字典序比大小,可以很方便的解决这题。要对string类型比较熟悉就行。
// 我还蛮奇怪，这题通过率低
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct people
{
    string name,brith;
};
int main(){
    people t,min,max;
    min.brith="1814/09/06";//存最大的出生日期，即年龄最小的人
    max.brith="2014/09/06";//存最早的出生日期，即年龄最大的人
    int n,sum=0;//sum存有效的出生日期
    cin>>n;
    while (n--)
    {
        cin>>t.name>>t.brith;
        if(t.brith>"2014/09/06"||t.brith<"1814/09/06") continue;//限制条件
        sum++;//证明有效
        if(t.brith>min.brith) min=t;
        if(t.brith<max.brith) max=t;
        
    }
    if(!sum) cout<<sum;
    else cout<<sum<<' '<<max.name<<' '<<min.name;
    return 0;
}