// 输出PATest
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int a[6]={0};//存PATest字母的数量
    string c={"PATest"};
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==c[0]) a[0]++;
        if(s[i]==c[1]) a[1]++;
        if(s[i]==c[2]) a[2]++;
        if(s[i]==c[3]) a[3]++;
        if(s[i]==c[4]) a[4]++;
        if(s[i]==c[5]) a[5]++;
    }
    while(1){
        for(int i=0;i<6;i++)
            if(a[i]!=0) {cout<<c[i];a[i]--;}//减到0就自然不会输出了
        if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]==0) break;
    }
    return 0;
}