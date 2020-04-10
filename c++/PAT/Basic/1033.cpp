/*
 * @Author: Jolson 
 * @Date: 2020-02-05 16:49:14 
 * @Last Modified by: Jolson
 * @Last Modified time: 2020-02-05 16:52:06
 */

// 旧键盘打字
// 如果没有一个字符能被打出，则输出空行。
#include<bits/stdc++.h>
using namespace std;

int main() {
    string w,s;//wrong sample
    //  测试点2不过的原因是：第一行字符串可能为空，因此不能使用scanf读取，要使用cin.getline
    // 所以这里用getline(cin,w)
    getline(cin,w);
    cin>>s;
    string::iterator it1 = w.begin(); 
    string::iterator it2 = s.begin();
    int num=0;//统计输出字符个数，没有字符输出要输出空行
    while (it2!=s.end())
    {
        it1 = w.begin();
        if(*it2>='A'&&*it2<='Z'){
            while (it1!=w.end()){
                if(*it1==*it2||*it1=='+') break;
                it1++;
            }
            if(it1==w.end()) {cout<<*it2;num++;}
        }
        else if(*it2>='a'&&*it2<='z'){
            while (it1!=w.end())
            {
                if(*it1==*it2-('a'-'A')) break;//小写字母还要看大写字母错没错
                it1++;
            }
            if(it1==w.end()) {cout<<*it2;num++;}
        }
        else {
            while (it1!=w.end())
            {
                if(*it1==*it2) break;
                it1++;
            }
            if(it1==w.end()) {cout<<*it2;num++;}
        }
        it2++;
    }
    if(!num) cout<<endl;
    return 0;
}