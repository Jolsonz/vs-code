/*
数组循环右移，但不能用额外数组。
[ab]先求逆[b-a-]再分别求逆反，[ba]从而做到循环右移
有时候用cin真的省点功夫
借鉴了一下别人的东西
*/
#include <iostream>
using namespace std;

void reverse(int a[], int start, int end){
	for(int i=start; i<=(start+end)/2; i++){
		int tmp = a[i];
		a[i] = a[start+end-i];
		a[start+end-i] = tmp;
	}
}

int main(){
	int n, m;
    cin>>n>>m;
	m %= n;
	int a[n];
	for(int i=0; i<n; i++){
        cin>>a[i];
		// 如果用C要写 scanf("%d",&a[i]) 注意不是字符数组都要写&
	}
	reverse(a, 0, n-m-1);
	reverse(a, n-m, n-1);
	reverse(a, 0, n-1);
	printf("%d", a[0]);
	for(int i=1; i<n; i++){
		printf(" %d", a[i]);
	}
	printf("\n");
	return 0;
}