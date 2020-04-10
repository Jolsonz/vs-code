// 字符统计
// 就是用到了ctype.h这个
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string a;
    int b[26]={0};//26个英文父母统计
    getline(cin,a);//读一行
    for(int i=0;i<a.size();i++){
        if(isalpha(a[i])){//比较方便判断字符
            if(a[i]>='A'&&a[i]<='Z'){
                b[a[i]-'A']++;
            }
            else b[a[i]-'a']++;
        }
    }
    int m1=0;
    char m2;
    for(int i=0;i<26;i++){
        if(b[i]>m1){
            m1=b[i];
            m2='a'+i;
        }
    }
    cout<<m2<<' '<<m1;
    return 0;
}