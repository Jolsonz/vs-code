// 找规律而已
#include<bits/stdc++.h>
double x,ans=0;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf",&x);
		ans +=x*i*(n-i+1);//规律
	}
	printf("%.2f\n",ans);
	return 0;
}