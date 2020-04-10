// 旧键盘
// 英文只输出大写
// 自己写的，参考了挺多stl中的东西，确实很方便。
// 用vector来方便的储存，用set来去重
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main(){
    string s1,s2;//s1应输入,s2实输入
    vector<char> s3;
    cin>>s1>>s2;
    int i=0,j=0,len;//分别是s1,s2的指针,len储存s1的长度就可以了
    len=s1.size();
    while (i != len-1)//没有达到s1末尾
    {
        if(s1[i]!=s2[j]) {
            s3.push_back(s1[i]);
            i++;
        }
        else {
            i++;j++;
        }
    }
    // s1到末尾之后，s2必到末尾
    set<char> ans;
    for(vector<char>::iterator it = s3.begin();it !=s3.end();it++){
        if(*it>='a'&&*it<='z') *it=*it-'a'+'A';//小写转大写
        ans.insert(*it);//把vector内的内容往set里塞，从而去重。
        // cout<<*it;
    }
    set<char>::iterator p=ans.begin();

    //又要求按s3中的顺序输出
    int sum = ans.size();//要输出多少元素
    j=0;//指着s3
    while(sum){
        p=ans.find(s3[j]);
        if(p!=ans.end()){sum--;cout<<*p;ans.erase(p);}
        //如果p不空，证明ans中找的到元素，于是输出它并把sum-1,然后从set中删掉它
        // set.find()如果找不到会返回set.end(),很合理。
        j++;
    }
    return 0;
}