/* 德才论  
用vector方便放入元素*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct student
{
    int num,D,C;
};

bool cmp(student a, student b){
    if(a.D+a.C!=b.D+b.C)//如果不等，降序排列
        return a.D+a.C>b.D+b.C;//降序
    else
    {
        if(a.D!=b.D)
            return a.D>b.D;//降序
        else
            return a.num<b.num;//在总分相同的情况下，德分也相同，按编号升序。
    }
}

int main(){
    // std::ios::sync_with_stdio(false);
    // 注意加上这句以应对大量IO ，可以不加,不加就可以用printf

    int N,L,H,M=0;
    cin>>N>>L>>H;
    student t;//用来输入每个学生的数据
// 话说这里不用struct student t么。

    // student stu1[10050],stu2[10050],stu3[10050],stu4[10050]
    // 这里如果用数组的话，后面输入的时候很麻烦，stu1-stu4每个要一个计数器
    vector<student> stu1,stu2,stu3,stu4;//这样子输入数据舒服点。
    while(N--)//输入的时候就分类放好
    {
        cin>>t.num>>t.D>>t.C;
        if(t.D>=L&&t.C>=L){//先及格
            M++;//统计及格的人数
            if(t.D>=H&&t.C>=H)
                stu1.push_back(t);//这样一次可以推进一个student结构数。
// 话说，既然t和stu1[0]都是student类，可以用stu1[0]=t来赋值么。
// 结论是可以，等下试一试。
            else if (t.D>=H&&t.C<H)
                stu2.push_back(t);
            else if (t.D<H&&t.C<H&&t.D>=t.C)
                stu3.push_back(t);
            else
                stu4.push_back(t);
        }
    }
	sort(stu1.begin(),stu1.end(),cmp);
	sort(stu2.begin(),stu2.end(),cmp);
	sort(stu3.begin(),stu3.end(),cmp);
	sort(stu4.begin(),stu4.end(),cmp);
    cout<<M<<'\n';//及格的人数
	for(int i=0;i<stu1.size();i++)
        printf("%d %d %d\n",stu1[i].num,stu1[i].D,stu1[i].C);
	for(int i=0;i<stu2.size();i++)
	    printf("%d %d %d\n",stu2[i].num,stu2[i].D,stu2[i].C);
	for(int i=0;i<stu3.size();i++)
	    printf("%d %d %d\n",stu3[i].num,stu3[i].D,stu3[i].C);
	for(int i=0;i<stu4.size();i++)
	    printf("%d %d %d\n",stu4[i].num,stu4[i].D,stu4[i].C);
	return 0;
}