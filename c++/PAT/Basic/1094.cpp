// 1094 谷歌的招聘 (20分)
// 比较简单，就是那个s.size()的错误我没想到。。我还以为要用Longlong的结果没有，浪费感情
// 输入在第一行给出 2 个正整数，分别是 L（不超过 1000 的正整数，为数字长度）和 K（小于 10 的正整数）。接下来一行给出一个长度为 L 的正整数 N。
#include<iostream>
#include<string>
using namespace std;
bool is_prim(int a){//判断素数
    if(a==0||a==1) return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int l,k;
    string s;
    cin>>l>>k>>s;
    for(int i=0;i<=l-k;i++){//注意要是等于号哦
// 如果说l比k小，那么相减得到的应该是负数，理应不会进入for循环，但是如果你改成了s.size()，因为s.size()的返回值是unsigned int类型，所以相减得到的不是负数而是unsigned int类型的一个很大的值，所以会进入for循环，导致了错误，如果你把l改成(int)s.size()是可以答案正确的～
        string b=s.substr(i,k);//截取长度
        int ans=stoi(b);
        if(is_prim(ans)){
            cout<<b;
            return 0;
        }
    }
    cout<<"404";
    return 0;
}