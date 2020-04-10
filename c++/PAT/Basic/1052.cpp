// 卖个萌 哈哈哈哈，就是字符串处理
// 自己写的，没写完。
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    string str1[8]={"0","╮","╭","o","~\\","/~ ","<",">"};
    string str2="0╯╰^-=><@⊙",str3="Д▽_ε^";
    string ans;
    while(n--){
        int a[6];
        for(int i=1;i<=5;i++){
            cin>>a[i];
        }
        ans+=str1[a[1]];
        ans+=str2[a[2]];
        ans+=str3[a[3]];
        ans+=str2[a[4]];
        ans+=str1[a[5]];
        if(a[1]>8||a[5]>8||a[2]>10||a[4]>10||a[3]>5) cout<<"Are you kidding me? @\\/@";
        else cout<<ans<<endl;
        ans.clear();
    }
    return 0;
}