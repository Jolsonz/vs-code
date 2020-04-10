#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int age,score;
};
bool cmp(student a,student b){
    if(a.score!=b.score) return a.score<b.score;
    else if(a.name!=b.name) return a.name<b.name;
    else return a.age<b.age;    
}
int main() {
    int n;
    student temp;
    vector<student> stu;
    cin>>n;
    while (n--){
        cin>>temp.name>>temp.age>>temp.score;
        stu.push_back(temp);
    }
    sort(stu.begin(),stu.end(),cmp);
    for(int i=0;i<stu.size();i++){
        cout<<stu[i].name<<' '<<stu[i].age<<' '<<stu[i].score<<endl;
    }
    return 0;
}