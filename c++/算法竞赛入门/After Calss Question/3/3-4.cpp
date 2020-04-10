//周期串,使用环形串的方法求解
// 这是参考的别人的
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int N;
    char str[100];
    cin>>N;//输入几个字符串
    while(N--)
    {
        cin>>str;
        int len=strlen(str);
        int t=1;//记录重复字符串的长度，从1开始。
        while(1)
        {
            int c=0;
            for(int i=0;i<len;i++)
            {
                if(str[i]==str[(i+t)%len])  //看一看转几个字符能够恢复原位
                    c++;
            }
            if(c==len)
                break;//跳出条件,所有字符都能转一个t之后回到原位，证明最小周期是t。
            t++;
        }
        cout<<t<<endl;
        if(N!=0)
            cout<<endl;//题目要求的输出
    }
    return 0;
}