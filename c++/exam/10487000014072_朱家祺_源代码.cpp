#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("C:\\Users\\Jolson\\Desktop\\exam\\test04.txt",ios::in);//这里修改文件路径
    int m,n,t1,t2,number;//t1指元素序号，t2指具体的摄像头编号，number指每个元素被集合覆盖的个数,
	cin>>m>>n;//m个元素,n个集合。即n个摄像头，m个地点。
    vector< vector <int> > camera(n);//n个摄像头
    while(cin>>t1){//输入元素序号
        cin>>number;
        for(int i=0;i<number;i++){//循环number次
            cin>>t2;//摄像头编号
            camera[t2].push_back(t1);//把集合对应的元素给加入。
        }
    }
    cin.close();
    //关闭输入流

    vector<int> ans;//放答案，集合的标号
    bool v[m]={false};//标记数组。
    int rest=m;
    while(rest > 0){//遍历Camera,在剩余的数=0时即可结束。
        int max_n = 0;//记录交集最大集合的Camera编号
        int max_jiao = 0;//记录最大交集的数量
        for(int i=0;i<n;i++){
            if(max_jiao > camera[i].size()) continue;//说明不用找,现有交集比较大
            int temp=0;
            for(auto j : camera[i]){ 
                if(!v[j]) temp++;
            }
            if(temp>max_jiao){//比之前的交集大。
                max_jiao=temp;
                max_n=i;
            }
        }
        for(auto j: camera[max_n]) v[j]=true;
        camera[max_n].clear();//用过就清除
        ans.push_back(max_n);
        rest-=max_jiao;//减去相交的。
    }
    cout<<"Need Camera number = "<<ans.size()<<endl;
    for(auto i:ans) cout<<i<<' ';
    cout<<endl;
    printf("Time used = %.19f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}