// 以相反的顺序打印字符串。
#include<bits/stdc++.h>
using namespace std;
void printReverse(const char *str);
int main() {
    char str[20];
    cin>>str;
    printReverse(str);
    return 0;
}

void printReverse(const char *str) {//const是为了避免意外修改，并且可以加速调用，不用创建副本。
  if (!*str)
    return;
  printReverse(str + 1);
  putchar(*str);
}