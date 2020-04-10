// 1078 字符串压缩与解压
// C压缩 D解压
#include<iostream>
#include<string>
using namespace std;
int main(){
    char c;
    cin>>c;
    getchar();//读入回车
    if(c=='C'){//压缩
        string t;
        getline(cin,t);
        int sum=1;
        for(int i=0;i<t.size();i++){
            if(t[i]==t[i+1]) sum++;
            else{
                if(sum==1) cout<<t[i];
                else{
                    cout<<sum<<t[i];
                    sum=1;
                }
            }
        }
        cout<<endl;
    }
    if(c=='D'){//解压
        string t;
        getline(cin,t);
        for(int i=0;i<t.size();i++){
            if(t[i]>='0'&&t[i]<='9'){
                int time=0;
                while(t[i]>='0'&&t[i]<='9'){
                    time=time*10+t[i]-'0';
                    i++;
                }
                while(time--) cout<<t[i];
                    
            }
            else cout<<t[i];
        }
    }
    return 0;
}