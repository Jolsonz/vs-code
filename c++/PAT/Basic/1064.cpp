// 朋友数
// set只能用迭代器访问，set内元素有序
#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,t;
    set<int> ans;
    cin>>n;
    while (n--)
    {
        int sum=0;
        cin>>t;
        while(t){
            sum+=t%10;
            t/=10;
        }
        ans.insert(sum);
    }
    int i=1,len;
    len=ans.size();
    cout<<len<<endl;
    for(set<int>::iterator it=ans.begin();it!=ans.end();it++){
        if(i==len){ 
            cout<<*it;
            break;
        }//应为最后一个不能输出空格，还要特意搞个标志。
        cout<<*it<<' ';
        i++;
    }
    return 0;
}