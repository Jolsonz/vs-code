#include<bits/stdc++.h>
using namespace std;

// 检查余数curValue是否在以前出现过，以前的余数保存在数组a中，如果重复出现，返回其第一次出现的位置，否则返回-1
int Check(int a[], int maxIndex, int curValue)
{
    for (int i = 0; i < maxIndex ; i++)
    {
        if(a[i] == curValue)
            return i ;
    }
    return -1 ;
}

// 主函数
// i是存放余数的数组，f是存放商的数组
void Fraction(int i[], int f[], int a, int b)
{
    // 能整除，直接输出并返回
    if(a % b == 0)
    {
        cout << a / b << endl ;
        return ;
    }
    // 输出整数部分
    if(a/b==0) cout<<'.';
    else cout << a / b << "." ;
    int c = 0 ; // 数组下标
    int t = a % b ;
    i[c] = t ;    // 第一个余数
    while (true)
    {
        if (t < b)
            t *= 10 ;        // 余数乘10，进行下一次
        f[c] = t / b ;        // 存储商
        i[++c] = t % b ;    // 存储余数
        t %= b ;            // 除

        if (t == 0) //除尽,输出后返回
        {
            for (int j = 0; j < c; j++)
            {
                cout << f[j] ;
            }
            cout << endl ;
            return ;
        }

        else
        {
            // 检查余数是否在之前出现过
            int r = Check(i, c, t % b) ;

            // 如果本次余数之前出现过，表明循环开始了
            if(r != -1)
            {
                // 输出常规小数部分
                for (int j = 0; j < r; j++)
                    cout << f[j] ;

                cout << "(" ;

                // 输出循环小数部分
                for (int j = r; j < c; j++)
                    cout << f[j] ;

                break ;
            }
        }
}
    cout << ")" << endl ;
}

int main(void)
{
    const int n = 100 ;
    int i[n] ; // 存储商的数组
    int f[n] ; // 存储余数的数组
    int a,b;
    scanf("%d/%d",&a,&b);
    Fraction(i, f, a, b) ;
    return 0 ;
}