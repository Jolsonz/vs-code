// 1067 试密码 (20分)
// 密码不含空格，但是输入的可能含空格
// 输入达n次，输出accout<<locked
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string password,t;
    cin>>password>>n;
    int k=0;
    getchar();//先读入个回车
    int f=1;
    while(1){
        getline(cin,t);
        if(t=="#") break;//结束输入
        if(f&&t!=password) {
            k++;
            cout<<"Wrong password: "<<t<<endl;
            if(k==n){//错误到n此，f=0，不允许试了。
                f=0;
                cout<<"Account locked";
            }
            continue;
        }
        if(f&&t==password){
            cout<<"Welcome in";
            f=0;
        }
    }
    return 0;
}