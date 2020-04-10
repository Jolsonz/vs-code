// 1084 外观数列 
// 思路和他大致相同，但是当时在实现上有点犹豫，借鉴了一下这位大神的
// 这个循环写得是相当精髓而且简洁有效，学习了，这个循环再给我1个月训练恐怕才能写出来。
// 注意string a;如果我只输入了两个字符，即 a="01" 那么a[2]和a[3]==0 这是自动加的。
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;//储存序列
	int n;//n代表第几项，故需循环n-1次
	cin >> s >> n;
	int j;
	for (int k = 1;k < n;k++) {//循环n-1次，得到第n个项，存在s里
		string t;//暂存序列
		for (int i = 0;s[i];i = j) {//有点意思的是，s作为string类型，结尾是0；也就是/000;
			for (j = i;s[j] && s[j] == s[i];j++);//从s[i]开始看往下有几个相同的，直到末尾(s[j]=0)，或一直碰那个不相等的
			t += to_string((s[i] - '0') * 10 + j - i);//然后从第一个相等到第一个不相等相减就是这个相等的个数
            // s[i]-'0'得到的是这个字符，  j-i得到的是字符相同的个数。
            // to_string  将  数字常量  转换为  字符串
            //string类型的 '+' 是拼接的意思
		}
		s = t;
	}
	cout << s << endl;
	return 0;
}