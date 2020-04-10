// 科学计数法
// 拿到题没什么好的思路，要判断+-，还有点麻烦，估计是用正则表达式
// 这是网上的一种思路，用 sscanf和正则的。之后再看吧。
#include <cstdio>
#include <cstring>
int main(){
	char decimal[10010],radix[10010];//decimal小数 radix基数
	scanf("%s",decimal);
	int e;
	sscanf(decimal,"%*[+-]%[^E]E%d",radix,&e);//基数，指数
	// %*[+-] 前面那个*指的是不传值到后面。只是匹配
	if (decimal[0]=='-') printf("-");
	int len=strlen(radix);
	if (e>0){
		if (1+e<=len-2){
			for (int i=0 ;i<=1+e; i++){
				if (radix[i]!='.') putchar(radix[i]);
			}
			putchar('.');
			for (int i=e+2; i<len; i++) putchar(radix[i]);
			}else {
			for (int i=0; i<len; i++){
				if (radix[i]!='.') putchar(radix[i]);
			}
			for (int i=0; i<e+1-(len-1); i++) putchar('0');
			}
	} else if (!e){
			for (int i=0; i<len; i++) putchar(radix[i]);
	} else {
			printf("0.");
			for (int i=0; i<-e-1; i++) putchar('0');
			for (int i=0; i<len; i++){
				if (radix[i]!='.') putchar(radix[i]);
			}
	}
}