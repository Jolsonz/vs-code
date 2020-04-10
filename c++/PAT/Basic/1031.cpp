// 1031 查验身份证 (15分)
// 全对要输出allpass
#include<bits/stdc++.h>
using namespace std;
int main(){
    int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//前17个数字的权重
    string j="10X98765432";//存对应校验码
    int n,wrong_num=0;
    string s;//输入身份证号
    cin>>n;
    while (n--)
    {
        cin>>s;
        int sum=0,f=0;//算权值的
        for(int i=0;i<17;i++){//前17位要是数字
            if(!isdigit(s[i])){cout<<s<<endl;f=1;wrong_num++;break;}
            sum+=(s[i]-'0')*quan[i];
        }
        if(f) continue;//已经是错误的了，不用再判断了
        sum=sum%11;
        //第18位，和校验码不同。
        if(j[sum]!=s[17]) {cout<<s<<endl;wrong_num++;}
    }
    if(!wrong_num) cout<<"All passed"<<endl;
    return 0;
}