// 考试座位号 easy
#include<iostream>
#include<string>
using namespace std;
struct student
{
    string number;
    int s1,s2;
};//输入s1,要求输出对应的number和s2
int main(){
    int n,i=0,sum;
    cin>>n;
    sum=n;
    student t[n];
    while(n--){
        cin>>t[i].number>>t[i].s1>>t[i].s2;
        i++;
    }
    int N,k;//待查询人数N,k是s1的号码
    cin>>N;
    while(N--){
        cin>>k;
        for(int i=0;i<sum;i++){
            if(k==t[i].s1) {
                cout<<t[i].number<<' '<<t[i].s2<<endl;
                break;
            }
        }
    }
    return 0;
}

