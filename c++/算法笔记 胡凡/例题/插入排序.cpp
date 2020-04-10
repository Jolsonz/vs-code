// 插入排序，可以用sort实现

void insort(int a[], int b[]) {//插入排序
	int key = 0;//当匹配到中间序列时，key置1，下次排序后输出，结束程序就行
	for (int i = 2; i <= n; i++) {//插入排序起始为2，结束为n，否则测试点2不通过
	// 想想为啥是2，因为sort[0,i),所以i是2的时候排序a[0]与a[1]。
		sort(a, a + i);//这里就不用老老实实的写插入排序的过程，反正每次把i之前的所有序列都排好就是了
	}//这里Sort[a,a+i)
}

// 另一种严格的实现过程

int a[maxn],n;
void insertsort(){
	for(int i=2;i<=n;i++){//元素从j=1开始存
		int temp=a[i],j=i;//从j开始往前枚举
		while (j>1&&temp<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
} 