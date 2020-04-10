// 又是结构体排序，没啥新意
#include<bits/stdc++.h>
using namespace std;
struct worker
{
    int number ,age;
    string name;
}temp;
bool cmp(worker a,worker b){
    if(a.age!=b.age) return a.age<b.age;
    else if(a.number!=b.number) return a.number<b.number;
    else return a.name<b.name;
}
int main() {
    int n;
    cin>>n;
    vector<worker> w;
    while(n--){
        cin>>temp.number>>temp.name>>temp.age;
        w.push_back(temp);
    }
    sort(w.begin(),w.end(),cmp);
    for (int i = 0; i < 3; i++){
        cout<<w[i].number<<' '<<w[i].name<<' '<<w[i].age<<endl;
    }
    
    return 0;
}