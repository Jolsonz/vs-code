/* 德才论  
数组实现，不用vector，也AC了
不过直觉vector方便点，遍历指针。
*/

#include<iostream>
#include<algorithm>
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
    int N,L,H,M=0;
    cin>>N>>L>>H;
    student t;
    student stu1[100500],stu2[100500],stu3[100500],stu4[100500];
    // 这里不能只开10^5个，开多一点才行，我也莫名其妙。
    int e1=0,e2=0,e3=0,e4=0;//遍历指针
    while(N--)//输入的时候就分类放好
    {
        cin>>t.num>>t.D>>t.C;
        if(t.D>=L&&t.C>=L){//先及格
            M++;//统计及格的人数
            if(t.D>=H&&t.C>=H)
                stu1[e1++]=t;
            else if (t.D>=H&&t.C<H)
                stu2[e2++]=t;
            else if (t.D<H&&t.C<H&&t.D>=t.C)
                stu3[e3++]=t;
            else
                stu4[e4++]=t;
        }
    }
    // STL中只有vector,string,deque可以用sort
    // 这种需要用地址指针，不能写sort(0,e1,cmp)
	sort(stu1,stu1+e1,cmp);
	sort(stu2,stu2+e2,cmp);
	sort(stu3,stu3+e3,cmp);
	sort(stu4,stu4+e4,cmp);
    cout<<M<<'\n';//及格的人数
	for(int i=0;i<e1;i++)
        printf("%d %d %d\n",stu1[i].num,stu1[i].D,stu1[i].C);
	for(int i=0;i<e2;i++)
	    printf("%d %d %d\n",stu2[i].num,stu2[i].D,stu2[i].C);
	for(int i=0;i<e3;i++)
	    printf("%d %d %d\n",stu3[i].num,stu3[i].D,stu3[i].C);
	for(int i=0;i<e4;i++)
	    printf("%d %d %d\n",stu4[i].num,stu4[i].D,stu4[i].C);
	return 0;
}