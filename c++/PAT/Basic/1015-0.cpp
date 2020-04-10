/* 德才论 
网上的C++版本 
整体思路是先分成4类，然后再分别排序。

问题:  
1.这个for循环不如while循环
2.可以不用std::ios::sync_with_stdio(false); 没超时
3.如果闲着的话struct内还可以加一个int sum
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Student{
	int stid,de,cai;	
};//定义结构体，成员为考号，德分，才分 

bool cmp(Student a,Student b)//设计适应题目的比较函数以调用排序算法 
{ 
	if(a.de+a.cai!=b.de+b.cai)
	return a.de+a.cai>b.de+b.cai;//降序 
	else
	{
		if(a.de!=b.de)
		return a.de>b.de;//降序 
		else
		return a.stid<b.stid;//升序 
	}
}
int main()
{
	std::ios::sync_with_stdio(false);//注意加上这句以应对大量IO 
	int N,L,H,M=0;
	Student t;//定义结构体变量 
	vector<Student>stu1,stu2,stu3,stu4;//使用vector线性存储结构体，以方便调用排序算法 
	cin>>N>>L>>H;
	for(int i=0;i<N;i++)
	{
		cin>>t.stid>>t.de>>t.cai;
		if(t.de>=L&&t.cai>=L)
		{
			M++;//统计达到最低分数线的考生人数
			if(t.de>=H&&t.cai>=H)
			stu1.push_back(t);
			else if(t.de>=H&&t.cai<H)//才分不到但德分到线，德分到线的意思是德分不小于此线 
			stu2.push_back(t);
			else if(t.de<H&&t.cai<H&&t.de>=t.cai)
			stu3.push_back(t);
			else 
			stu4.push_back(t);
		}
	}
	//调用排序算法 
	sort(stu1.begin(),stu1.end(),cmp);
	sort(stu2.begin(),stu2.end(),cmp);
	sort(stu3.begin(),stu3.end(),cmp);
	sort(stu4.begin(),stu4.end(),cmp);
	//输出，注意换行时使用endl耗时很长，会超时，故用'\n'或“\n” 
	cout<<M<<'\n';
	for(int i=0;i<stu1.size();i++)
	cout<<stu1[i].stid<<' '<<stu1[i].de<<' '<<stu1[i].cai<<'\n';
	for(int i=0;i<stu2.size();i++)
	cout<<stu2[i].stid<<' '<<stu2[i].de<<' '<<stu2[i].cai<<'\n';
	for(int i=0;i<stu3.size();i++)
	cout<<stu3[i].stid<<' '<<stu3[i].de<<' '<<stu3[i].cai<<'\n';
	for(int i=0;i<stu4.size();i++)
	cout<<stu4[i].stid<<' '<<stu4[i].de<<' '<<stu4[i].cai<<'\n';
	return 0;
}