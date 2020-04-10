//判断闰年
//能被4整除并且不能被100整除的是闰年,能被400整除的也是闰年

#include<stdio.h>


int IsLeapYear(int y)
{
	return (y%100!=0&&y%4==0)||(y%400 == 0);
}
int main()
{	
	int year = 0;
	printf("请输入需要查询的年份:>");
	scanf("%d", &year);
	int check = IsLeapYear(year);
	if (0 == check)
		printf("%d年不是闰年\n",year);
	else
		printf("%d年是闰年\n",year);
    return 0;

}//注意输入chcp 65001