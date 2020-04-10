// 数字加密
// 题目蛮多地方都没写清楚的。
#include<iostream>
using namespace std;
int main(){
	string a, b;
	char list[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
	cin >> a >> b;
	if(b.length() < a.length()) b.insert(0, a.length() - b.length(), '0');//如果b小于a,插入b-a长度的0在b的开头，b大于a，高于a的位数的数字原样输出
	for(int i = b.length() - 1, j = a.length() - 1, pos = 0; j >= 0; i--, j--, pos++){
		if(pos % 2 == 0){
			//奇数位
			b[i] = list[((a[j] - '0') + (b[i] - '0')) % 13];
		}else{
			//偶数位
			if(b[i] - a[j] < 0) b[i] = b[i] - a[j] + '0' + 10;
			else b[i] = b[i] - a[j] + '0';
		}
	}
	cout << b;
}