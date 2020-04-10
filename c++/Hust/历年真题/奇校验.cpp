// 那我估计今年可能会考CRC校验，自己写一下。
#include <iostream>
#include <string>
using namespace std;

void trans(int m){
    int sum=0,t;
    string ans;
    while(m!=0){
        t=m%2;
        if(t) sum++;
        ans=to_string(t)+ans;
        m/=2;
    }
    string s1(7-ans.size(),'0');//这个是PTA B1074里用过的string的一个很好用的初始化技巧。
    if(sum%2) ans='0'+s1+ans;
    else ans='1'+s1+ans;
    cout<<ans<<endl;
}

int main(){
    string t;
    while(cin>>t){
        int k;
        for(int i=0;i<t.size();i++){
            k=t[i];//把ascii码值给k。
            trans(k);
        }
    }
    return 0;
}
/* 
看到有人用位运算做，也可以
链接：https://www.nowcoder.com/questionTerminal/729d11d043d8448e83befa1410b694fe?f=discussion&toCommentId=5460355
来源：牛客网

int main()
{
    char c;
    int i;
    bitset<8> bit;
    while(cin>>c)
    {
        if(c == ' ' || c == '\n')
            continue;
        bit = c;
        if((bit.count() & 1) == 0)
            bit.set(7);
        cout<<bit<<endl;
    }
    return 0;
} */