// 1044 火星数字 (20分)
// 13进制的另一种说法而已，每行给出一个 [0, 169) 区间内的数字 —— 或者是地球文，或者是火星文。
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string g[13]= {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};//0-12,个位
    string s[13]= {"0","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};//十位的1-12
    cin>>n;
    string t;
    getchar();//接收回车，不然被下面收了
    while (n--){
        getline(cin,t);
        if(isdigit(t[0])){//第一个是数字就知道了
            int num=stoi(t);//字符串转数字的函数
        // 我知道我有个地方可能理解错了，就是输入13不能输出tam tret,只输出tam？
            if(num/13) cout<<s[num/13];//先输出10位
            if(num/13&&num%13) cout<<' ';//还有个位才输出空格
            if(num%13||num==0) cout<<g[num%13];
            cout<<endl;
        }
        else{//火星文转数字
            if(t.size()>5){//证明是两个单词，所以。前三个一定是十位，后面的是个位
                string s1;//s1十位
                s1=t.substr(0,3);//从0开始，长度为3的子串
                t.erase(t.begin(),t.begin()+4);//删去[0,4)中间的子串,剩下个位
                int sum=0;
                for(int i=1;i<13;i++){
                    if(s1==s[i]) {sum=i*13;break;}
                }
                for(int i=0;i<13;i++){
                    if(t==g[i]){sum+=i;break;} 
                }
                cout<<sum<<endl;
            }
            else{//一个单词，先在g[]里面找，再到s[]里找
                int i;
                for(i=0;i<13;i++) if(t==g[i]){cout<<i<<endl;break;}
                if(i==13){//证明在s[i]里没找到
                    for(i=1;i<13;i++) if(t==s[i]){cout<<i*13<<endl;break;}
                }
            }
        }
    }
    return 0;
}