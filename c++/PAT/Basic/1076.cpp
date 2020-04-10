// wifi密码
// 要用getline来读入一行么。 -'A'+1;

#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    getchar();//吸收一个回车，不然会导致那个回车被下面的吸收。
    while (n--)
    {
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='T'){
                i=i-2;
                cout<<s[i]-'A'+1;
                break;
            }
        }
    }
    return 0;
}