// 字符串A+B
// 思路就是打表，反正就128个ASCAII码，简单。
// cin>>A>>B 遇到空格会停
#include<iostream>
#include<string>
using namespace std;
int main(){
    string A,B;
    int ans[129]={0};//128个ascii码值
    getline(cin,A);
    getline(cin,B);
    int i=0;
    while(i!=A.size()){
        if(!ans[A[i]]){
            ans[A[i]]++;
            cout<<A[i];
        }
        i++;
    }
    i=0;
    while(i!=B.size()){
        if(!ans[B[i]]){
            ans[B[i]]++;
            cout<<B[i];
        }
        i++;
    }
    return 0;
}