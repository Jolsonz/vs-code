// 1065 单身狗 (25分)
// 思路是这样，开一个10^6的整型数组，存伴侣
// 然后输入参加派对的ID,每输入一个ID，将其ID放在一个SET里，每次输入ID时应查询SET里有无其伴侣，如有，去掉set中他的伴侣。最后set里剩下来的，输出。
// 就是考set的用法，简单
// 注意sd.find(a)找不到会停在st.end()，这是显而易见的。
#include<iostream>
#include<set>
int ban[1000000]={0};
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        scanf("%d %d",&a,&b);
        ban[a]=b;
        ban[b]=a;//互相存伴侣的ID
    }
    cin>>n;//这个n是参加派对的人数
    set<int> sd;
    for(int i=0;i<n;i++){
        cin>>a;//把a拿来用，当临时输入的变量
        if(sd.find(ban[a])!=sd.end()) sd.erase(sd.find(ban[a]));//如果set中有a的伴侣，去掉。
        else sd.insert(a);//否则插进去。
       
    }
    cout<<sd.size()<<endl;
    for(auto it=sd.begin();it!=sd.end();it++){
        if(it==sd.begin()) printf("%05d",*it);
        else printf(" %05d",*it);
    }
    return 0;
}