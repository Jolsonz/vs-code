// 完美数列  M ≤ mp，则称这个数列是完美数列。
// 第五个测试点用Int会溢出。
// 这个循环值得仔细体会。

#include<iostream>
#include<vector>
#include<algorithm>
typedef long long LL;
using namespace std;
int main(){
    int N,t;//N是输入的正整数的数目,t是暂时存数据的东西。
    LL p;
    vector<LL> a; 
    cin>>N>>p;
    for(int i=0;i<N;i++){
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());//先排序

    int j=0,i=0,num=-1;//双指针法，num先放-1，便于之后比较放最大值。

// 这个循环借鉴的别人的，写的很好。
	while(j<N){//j不到数列底。
		while(j<N&&a[j++]<=a[i]*p)//这里不能写if哦，只能是while
		    num = max(num,j-i);   
		i++;
	}
    cout<<num;
    return 0;
}