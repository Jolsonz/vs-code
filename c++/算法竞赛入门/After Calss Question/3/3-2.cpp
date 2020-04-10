// 分子量 UVa1586
//可以用ctype判断字母还是数字，当然用ASCII码也行
// 输出时间要优化，超时了。
/*
从这题 学到了很多东西,比如用ASCII码来区分数字,字符
如何处理错误，如何输出中间结果.一开始的思路没有错，就是中间犯的小错太多。
字符串输出单个字符用%c
最好有个草稿纸，把问题模块化，便于思考解决方法
另外可以考虑用字符数组，即 double m[200] m['C']=12.01;这好像在C+++中也可以,还是用 std::map m
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[20];
    int n;
    cin>>n;
    while(n--) {
        scanf("%s",s);
        double sum = 0;
        double a;
        for(int i=0 ; i < strlen(s) ; i++){
            int c=0;
            if(s[i]>='A' && s[i]<='Z'){
                if(s[i]=='C') a=12.01;
                if(s[i]=='H') a=1.008;
                if(s[i]=='O') a=16.00;
                if(s[i]=='N') a=14.01;
                sum +=a ;//先加一个再说
            } 
            else
            {
                while(s[i]>='0'&&s[i]<='9'){
                    c=c*10+(s[i]-'0');
                    i++;
                }//这个循环的目的是为了解决输入C12这类的数字的问题
                i--;//i--是因为循环结束会自动i++，相当于多加了一个，这里要减去                
                sum+=a*(c-1);//因为前面先加了一个
            }
        }
        printf("%.3f\n",sum);//输出也要用浮点数，用整数会直接为0
    }
    return 0;

}