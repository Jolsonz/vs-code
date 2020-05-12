// set_intersection（取集合交集）
#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("C:\\Users\\Jolson\\Desktop\\exam\\test01.txt",ios::in);
    int m,n,t1,t2,number;//t1指元素序号，t2指具体的摄像头编号，number指每个元素被集合覆盖的个数,
	cin>>m>>n;//m个元素,n个集合。即n个摄像头，m个地点。
    vector<set<int> > camera(n);//n个摄像头
    while(cin>>t1){
        cin>>number;
        for(int i=0;i<number;i++){//循环number次
            cin>>t2;
            camera[t2].insert(t1);//把集合对应的元素给加入。
        }
    }
    cin.close();
    //把该输入的输入了

    vector<int> ans;//放答案，集合的标号
    set<int> element,before;//放元素
    for(int i=0;i<m;i++) element.insert(i);//初始化
    while(element.size() != 0){//遍历Camera，找与element交集最大的集合，然后从element中去除这个集合。重复操作，直到element==0
        set<int> max_set;//交集最大的集合。
        int max_num = 0;//记录交集最大集合的Camera编号
        for(int i=0;i<n;i++){
            if(max_set.size() > camera[i].size()) continue;//说明不用找,现有交集比较大
            set<int> temp;
            // 去掉上一次交集的
            set_difference(camera[i].begin(), camera[i].end(), before.begin(),before.end(), insert_iterator<set<int>>(temp,temp.begin()));
            camera[i]=temp;
            set_intersection(element.begin(), element.end(), camera[i].begin(), camera[i].end(), insert_iterator<set<int>>(temp, temp.begin()));
            if(temp.size()> max_set.size()){//比之前的交集大。
                max_set=temp;
                max_num=i;
            }
        }
        before=max_set;//放最大的
        ans.push_back(max_num);//把相应集合的编号放进去。
        camera[max_num].clear();//已经用过这个集合了，可以清空这个集合，防止之后重复用到
        set<int> _temp;//暂存结果
        set_difference(element.begin(), element.end(), max_set.begin(), max_set.end(), insert_iterator<set<int>>(_temp,_temp.begin()));//去掉交集
        element=_temp;
    }
    cout<<"Need Camera number = "<<ans.size()<<endl;
    for(auto i:ans) cout<<i<<' ';
    cout<<endl;
    return 0;
}