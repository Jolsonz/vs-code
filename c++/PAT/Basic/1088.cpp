// 1088 三人行 (20分)
// 丙不一定是int值，可能是4.5这样的数字
// 甲的能力值确定是 2 位正整数；把甲的能力值的 2 个数字调换位置就是乙的能力值；甲乙两人能力差是丙的能力值的 X 倍；乙的能力值是丙的 Y 倍
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,x,y;//m是自己的能力值，
    cin>>m>>x>>y;
    int a,b;//甲乙丙，先要根据x,y找到满足条件的a,b,c
    double c;
    for(a=99;a>=10;a--){//解不唯一，以甲的最大值为准
        b=a/10+(a%10)*10;//把b放a的倒置
        c=(double)b/y;//得到丙的能力值
        if((double)abs(a-b)==x*c) break;//说明找到了
    }
    if(a==9) cout<<"No Solution\n";
    else{//说明找到了
        cout<<a;

        if(a>m) cout<<" Cong";
        else if(a<m) cout<<" Gai";
        else cout<<" Ping";

        if(b>m) cout<<" Cong";
        else if(b<m) cout<<" Gai";
        else cout<<" Ping";

        if(c>m) cout<<" Cong";
        else if(c<m) cout<<" Gai";
        else cout<<" Ping";
    } 
    return 0;
}