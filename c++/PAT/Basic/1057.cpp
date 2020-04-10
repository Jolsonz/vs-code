// 1057 数零壹
#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            if(s[i]>='A'&&s[i]<='Z')
                sum+=s[i]-'A'+1;
            else sum+=s[i]-'a'+1;
        }
    }
    int n0=0,n1=0;
    while (sum)
    {
        if(sum%2) n1++;
        else n0++;
        sum/=2;
    }
    cout<<n0<<' '<<n1;
    return 0;
}