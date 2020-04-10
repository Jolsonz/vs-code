// 对每个要查询的 ID，在一行中输出 ID: 奖品，
// 其中奖品或者是 Mystery Award（神秘大奖）、或者是 Minion（小黄人）、或者是 Chocolate（巧克力）。
// 如果所查 ID 根本不在排名里，打印 Are you kidding?（耍我呢？）。如果该 ID 已经查过了（即奖品已经领过了），打印 ID: Checked（不能多吃多占）。
#include<bits/stdc++.h>
using namespace std;
const int maxn = 10000;
int have_get[maxn]={0};//存每个人的礼物是否领过，领了置1
int id[maxn]={0};
int is_prime(int n){//判断素数
    for (int i = 2; i<= sqrt(n) ; i++)//写i*i<=n也可以
        if(n%i==0) return 0;
    return 1;        
}
int main() {
    int n,k;//n<10000
    cin>>n;
    int t;
    for(int i=0;i<n;i++) {
        cin>>t;//存编号
        id[t]=i+1;//直接把id和排名对上。
    }
    cin>>k;//待查id
    for(int i=0;i<k;i++){
        int r;//存排名
        cin>>t;//输入编号。
        r=id[t];
        if(!r) printf("%04d: Are you kidding?\n",t);//找不到编号
        else if(have_get[r]) printf("%04d: Checked\n",t);//已经领过
        else if(r==1){
            have_get[r]=1;
            printf("%04d: Mystery Award\n",t);//第一名
        }
        else if(is_prime(r)){//判断是否是素数。
            have_get[r]=1;
            printf("%04d: Minion\n",t);//素数
        } 
        else{
            have_get[r]=1;
            printf("%04d: Chocolate\n",t);//其他情况
        }
    }
    return 0;
}