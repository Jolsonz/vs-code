// 就是换个输出格式而已
// 我还纠结了挺久的，因为一下觉得好多方法都可以，但是其中有些比较麻烦。
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    string ans;
    if(sum<0){
        sum=abs(sum);
        ans+='-';
    }
    string t=to_string(sum);
    a=t.size()%3;
    if(a==0) a=3;
    ans+=t.substr(0,a);
    while (a!=t.size()){
        ans+=','+t.substr(a,3);
        a=a+3;
    }
    cout<<ans;
    return 0;
}