// 这个人的也比较短。
int main() {

	int n;
	int a[100005];
	cin>>n;
	for(int t=0; t<n; t++) {
		scanf("%d",&a[t]);
	}
	sort(a,a+n);
	int temp=0;
	for(int t=n-1; t>=0; t--) {
		if(a[t]>n-t)
			temp++;
	}
	cout<<temp<<endl;

	return 0;
}