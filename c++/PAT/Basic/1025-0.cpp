// 反转链表
// 写的超烂，算了，不想改了。。
// 可用algorithm中的Reverse来逆序，不用写函数。
// 有两个测试用例不好通过，一是大量的节点数据，查找超时的问题，二是不一定所有的节点都是有效节点，对于这种情况需要删除无效的节点
// 我尽力了，但是这个算法在一个大量的节点数据下，还是查找超时了，这是算法不够优秀，空间换时间啊，老哥。
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
    int address,data,next;
};
int main(){
    // ios::sync_with_stdio(false);//加速，关闭输入输出流同步。
    int next,N,K,i;//N为节点数，K为反转数
    cin>>next>>N>>K;
    vector<Node> a,c;//c放答案
    Node t;//用于暂时输入数据
    for(int i=0;i<N;i++){
        cin>>t.address>>t.data>>t.next;
        a.push_back(t);
    }
    vector<int> b;//b放节点DATA排序
    while (1){//找正常顺序的数据，直到结尾-1，或直到next找不到对应的address
        int j;
        for (int j = 0; j < N; j++)
        {
            if(next==a[j].address) {
                b.push_back(a[j].data);
                next=a[j].next;
                break;
            }
        }
        if(j==N||next==-1){//说明next找不到对应的address
            break;
        }
    }
    auto it=b.begin();
    for(int i=0;b.size()/K;i++){//按要求反转
        reverse(it,it+K);
        it=it+K;
    }
    int j=0;
    while(c.size()!=b.size()){
        for(int i=0;i<N;i++){
            if(b[j]==a[i].data){
                t.address=a[i].address;
                t.data=a[i].data;
                t.next=a[i].next;
                break;
            }
        }
        c.push_back(t);
        j++;
    }
    for (int i = 0; i < c.size()-1; i++){
        c[i].next=c[i+1].address;
    }//重新确定next的关系
    for (i = 0; i < c.size()-1; i++){
        printf("%05d %d %05d\n",c[i].address,c[i].data,c[i].next);
    }
    printf("%05d %d -1\n",c[i].address,c[i].data);
    return 0;
}