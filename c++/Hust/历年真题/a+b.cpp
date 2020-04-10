// 大整数加法，用数组或者string都行
// 这题还算有点意思。
// 但是这题默认所有值都是正值了，不用特殊处理
#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    while(cin>>a>>b){
        int f=0;//记录进位
        if(a.size()>b.size()){
            string s(a.size()-b.size(),'0');//初始化全为0，这个要会用
            b=s+b;
        }
        else if(a.size()<b.size()){
            string s(b.size()-a.size(),'0');
            a=s+a;
        }
        string c=a;
        for(int i=a.size()-1;i>=0;i--){//从后往前
            c[i]='0'+(a[i]-'0'+b[i]-'0'+f)%10;//还得加0变成字符
            f=(a[i]-'0'+b[i]-'0'+f)/10;//更新进位
        }
        if(f) c='1'+c;//最后还有进位，前面要加1
        cout<<c<<endl;
    }
    return 0;
}