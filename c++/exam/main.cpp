// set_intersection（取集合交集）
#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("C:\\Users\\Jolson\\Desktop\\exam\\sc01.txt",ios::in);
    int m,n,t,count,temp;//t指元素序号，count指每个元素被集合覆盖的个数
	cin>>m>>n;//m个元素,n个集合
    vector<set<int> > _set(n);//n个集合
    while(cin>>t){
        cin>>count;
        for(int i=0;i<count;i++){
            cin>>temp;
            _set[temp].insert(t);//把集合对应的元素给加入。
        }
    }
    cin.close();
    //把该输入的输入了
    vector<int> ans;//放答案，集合的标号
    set<int> element;//放元素
    for(int i=0;i<m;i++) element.insert(i);//初始化
    // 每次遍历_set，找到与element交集最大的那个，max_set,去除element中max_Set的元素。持续下去，一直到element为空
    while(element.size() != 0){
        set<int> max_set;
        int max_num;
        for(int i=0;i<n;i++){
            set<int> _temp;
            int k=max_set.size();
            set_intersection(element.begin(), element.end(), _set[i].begin(), _set[i].end(), insert_iterator<set<int>>(_temp, _temp.begin()));
            if(_temp.size()>k){
                max_set=_temp;
                max_num=i;
            }
        }
        //最后让_set-_temp即可
        ans.push_back(max_num);//把相应集合的编号放进去。
        _set[max_num].clear();//已经用过这个集合了，清空这个集合。
        set<int> d;
        set_difference(element.begin(), element.end(), max_set.begin(), max_set.end(), insert_iterator<set<int>>(d,d.begin()));//结果放在d里
        element=d;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i<<' ';
    return 0;
}