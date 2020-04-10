// 1079 延迟的回文数
// 非回文数也可以通过一系列操作变出回文数。首先将该数字逆转，再将逆转数与该数相加，
// 如果和还不是一个回文数，就重复这个逆转再相加的操作，直到一个回文数出现。如果一个非回文数可以变出回文数，就称这个数为延迟的回文数。
// 重复操作直到 C 在 10 步以内变成回文数
#include<bits/stdc++.h>
using namespace std;
string jia(string a,string b){//实现加法
    int j=0;//表示进位
    string ans;
    for(int i=a.size()-1;i>=0;i--){
        ans=to_string((a[i]-'0'+b[i]-'0'+j)%10)+ans;//加在前面
        j=(a[i]-'0'+b[i]-'0'+j)/10;
    }
    if(j) ans='1'+ans;
    return ans;
}
int main() {
    string a,b,c,d;
    cin>>a;
    b=a;
    reverse(b.begin(),b.end());
    int f=1;
    if(a==b){//主要是a一开始可能就是满足回文的，就不用判断
        f=0;
        c=a;
        d=c;
    }
    for(int i=0;i<10&&f;i++){
        // 实现a+b=c
        c=jia(a,b);
        cout<<a<<" + "<<b<<" = "<<c<<endl;
        d=c;
        reverse(d.begin(),d.end());
        if(c==d) break;
        a=c;
        b=d;
    }
    if(d==c) cout<<c<<" is a palindromic number.";
    else cout<<"Not found in 10 iterations.";
    return 0;
}