#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int g[n];
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    map<string,string> mp1;//输
    mp1["ChuiZi"]="JianDao";
    mp1["JianDao"]="Bu";
    mp1["Bu"]="ChuiZi";
    map<string,string> mp2;//赢
    mp2["ChuiZi"]="Bu";
    mp2["JianDao"]="ChuiZi";
    mp2["Bu"]="JianDao";
    string t;
    int count=-1,k=0;
    while(cin>>t){
        if(t=="End") break;
        count++;
        if(count==g[k]){//说明要输一次了
            count=-1;//重新赋值
            k++;
            if(k==n) k=0;
            cout<<mp1[t]<<endl;
        }
        else cout<<mp2[t]<<endl;
    }

    return 0;
}