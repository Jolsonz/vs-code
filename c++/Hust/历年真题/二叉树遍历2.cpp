// 链接：https://www.nowcoder.com/questionTerminal/6e732a9632bc4d12b442469aed7fe9ce?f=discussion
// 这哥们儿有点猛啊，好短啊。

#include<iostream>
#include<algorithm>
using namespace std;
void Post(string str1,string str2)
{
    if(str1.length()==0)    return;
    int root=str2.find(str1[0]);
    Post(str1.substr(1,root),str2.substr(0,root));
    Post(str1.substr(root+1),str2.substr(root+1));
    cout<<str1[0];
}
int main()
{
    string str1,str2;
    while(cin>>str1>>str2)
    {
        Post(str1,str2);
        cout<<endl;
    }
}