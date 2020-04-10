// 用set去重
#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++){
        s.insert(i/2+i/3+i/5);
    }
    cout<<s.size();
    return 0;
}