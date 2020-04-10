/* 如果一个元素是主元，首先必须满足：
（1）该元素的位置是正常排序的位置
（2）该元素前的最大元素必须比该元素小。 */
// 需要额外添加一个变量记录从 0 到当前位置的最大值 max。
// 如果正在处理的数与顺序排列后的一致，又等于这个最大值，(说明后面的数全都大于等于这个主元)说明它就是主元。这样的代码更简单些，无需使用结构来记录原编号了。
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int n,t;
    cin>>n;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    b=a;//vector可以这么赋值
    sort(b.begin(),b.end());//把b给排序了
    int count=0,max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]==b[i]){//在正确的位置上相等才需要判断是不是前面的都比他小，后面的都比他大
            if(max==a[i]){//这里就不用写循环了
            count++;
            c.push_back(a[i]);}
        }
    }
    cout<<count<<endl;
    if(count)
        for (int i = 0; i < c.size(); i++)
        {
            if(!i) cout<<c[i];
            else cout<<' '<<c[i];
        }
    else cout<<endl;
    return 0;
}