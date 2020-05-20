#include<bits/stdc++.h>
using namespace std;
// 不超过 1000 位数,用string
int main() {
    string ans,t;
    cin>>ans;
    while(cin>>t){
        if(t=="-1") break;
        if(t.size()==ans.size()){//首先长度要同
            int f1=1,f2=1;
            for(auto it1=t.begin(),it2=ans.begin(); it1!=t.end() && f2 ;it1++,it2++){
                if(*it1!=*it2){
                    if(f1){//f1=1说明遇到第一个不同字符
                        if(abs(*it1-*it2)==1) f1=0;
                        else {
                            cout<<"No\n";
                            f2=0;
                        }
                    }
                    else{
                        cout<<"No\n";
                        f2=0;
                    }

                }
            }
            if(f2) cout<<"Yes\n";

        }
        else cout<<"No\n";
    }
    return 0;
}