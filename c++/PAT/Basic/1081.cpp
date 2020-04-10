// 1081 检查密码 (15分)
// easy
// 密码必须由不少于6个字符组成，并且只能有英文字母、数字和小数点 .，还必须既有字母也有数字。

/*     如果密码合法，输出Your password is wan mei.；
    如果密码太短，不论合法与否，都输出Your password is tai duan le.；
    如果密码长度合法，但存在不合法字符，则输出Your password is tai luan le.；
    如果密码长度合法，但只有字母没有数字，则输出Your password needs shu zi.；
    如果密码长度合法，但只有数字没有字母，则输出Your password needs zi mu.。
 */
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    getchar();//读入回车
    while(n--){
        string s;
        getline(cin,s);//读入空格
        if(s.size()<6) cout<<"Your password is tai duan le."<<endl;//长度不够啊
        else{//检查合不合法
            int f=0,f1=0,f2=0;//f1标志有字母，f2标志有数字。f标志着存在不合法字符
            for(int i=0;i<s.size();i++){
                if(!isalnum(s[i])&&s[i]!='.'){//存在不合法字符
                    f=1;
                    cout<<"Your password is tai luan le."<<endl;
                    break;
                }
                if(isalpha(s[i])) f1=1;
                if(isdigit(s[i])) f2=1;
            }
            if(!f){//如果没有非法字符
                if(f1 && !f2) cout<<"Your password needs shu zi."<<endl;
                else if(!f1 && f2) cout<<"Your password needs zi mu."<<endl;
                else if(f1 && f2) cout<<"Your password is wan mei."<<endl;
            }
        }
    }
    return 0;
}