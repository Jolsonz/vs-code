// 比较简单
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int sum=0;//统计一个单词里字符的个数
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(sum) cout<<sum<<' ';//sum为0是不需要输出的
            sum=0;
        }
        else if(s[i]=='.'){
            if(sum) cout<<sum;//最后一个sum还是要输出的。
            break;  
        }
        else{
            sum++;
        }
    }
    return 0;
}