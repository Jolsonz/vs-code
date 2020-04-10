// 射击比赛，比较简单
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
struct member{
    string ID;
    int x,y;
    double score;
};
int main(){
    int n;
    member t;//暂存数据
    cin>>n;
    double max=0,min=20000;
    string max_name,min_name;
    for(int i=0;i<n;i++){
        cin>>t.ID>>t.x>>t.y;
        t.score=sqrt(t.x*t.x+t.y*t.y);//double sqrt(double x)
        if(t.score>max) {max=t.score;max_name=t.ID;}
        if(t.score<min) {min=t.score;min_name=t.ID;}
    }
    cout<<min_name<<' '<<max_name;
    return 0;
}