// 总的来说处理二进制的时候比较方便，但是感觉蛮多题也用不到。
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    bitset<5> b("010"); //5表示5个二进位
    // 初始化⽅式：
    // bitset<5> b; 都为0
    // bitset<5> b(u); u为unsigned int，如果u = 1,则被初始化为10000
         // 如果u=5 初始化为10100，是倒着的二进制，u=6是01100
    // bitset<5> b(s); s为字符串，如"1101" -> "10110"
    // bitset<5> b(s, pos, n); 从字符串的s[pos]开始，n位⻓度
    for(int i = 0; i < 5; i++)
        cout << b[i];
    cout << endl << b.any(); //b中是否存在1的二进制位,就是说b中是否有1？那不废话，没1不就是0了。
    cout << endl << b.none(); //b中不存在1吗？

    cout << endl << b.count(); //b中到1的二进制位的个数
    cout << endl << b.size(); //b中二进制位到个数
    cout << endl << b.test(2); //测试下标为2处是否二进制位为1
    b.set(4); //把b的下标为4处置1
    b.reset(); //所有位归零
    b.reset(3); //b的下标3处归零
    b.flip(); //b的所有二进制位逐位取反
    unsigned long a = b.to_ulong(); //b转换为unsigned long类型
    return 0;
}