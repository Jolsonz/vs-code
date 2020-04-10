// 插入与归并 (25分) 现给定原始序列和由某排序算法产生的中间序列，请你判断该算法究竟是哪种排序算法？Insertion Sort表示插入排序、Merge Sort表示归并排序
// 由于这道题排序个数并不多（N<=100），所以我们没必要一定要把这两个排序方法都写出来，我们只需要知道原理，这里通过STL提供的sort模拟插入和归并排序
// 这个人写得好，写的精细。
#include<iostream>
#include<algorithm>
using namespace std;
int n;
void insort(int a[], int b[]) {//插入排序
	int key = 0;//当匹配到中间序列时，key置1，下次排序后输出，结束程序就行
	for (int i = 2; i <= n; i++) {//插入排序起始为2，结束为n，否则测试点2不通过
	// 想想为啥是2，因为sort[0,i),所以i是2的时候排序a[0]与a[1]。
		sort(a, a + i);//这里就不用老老实实的写插入排序的过程，反正每次把i之前的所有序列都排好就是了
		if (key) {
			cout << "Insertion Sort\n" <<a[0];//先把a[0]输出了
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return;
		}
		if (equal(a, a + n, b))  //equal是一个比较数组的函数，表明匹配到了中间序列，那么下一次要输出下一个序列
			key = 1;
	}
}
void mesort(int a[], int b[]) {//2路归并排序
	int key = 0;
	for (int i = 2;; i *= 2) {//这里不给结束条件，是因为当i>n时还要进行一次排序
	// i指每次排序几个数
		for (int j = 0; j < n; j += i) {//对每个小方框内排序
			sort(a + j, a + (j + i < n ? j + i : n));  //注意确定边界
// a + (j + i < n ? j + i : n)这句的意思是，如果j+i<n，那么证明还没到最后，排序[a+j,a+j+i)共i个，如果到了边界，就把最后的都排序了
		}
		if (key) {
			cout << "Merge Sort" << endl;
			cout << a[0];
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return;
		}
		if (equal(a, a + n, b))
			key = 1;
		if (i > n)//因为当i>n时还要进行一次排序
			break;
	}
}
int main() {
	cin >> n;
	int a1[100], a2[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a1[i];
		a2[i] = a1[i];
	}
	for (int i = 0; i < n; i++)
		cin >> b[i];
	insort(a2, b);
	mesort(a1, b);
	return 0;
}