// 谱半径
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,a,b;//a,b分别为实虚
    double max=0,t;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        t=sqrt(a*a+b*b);
        if(t>max) max=t;
    }
    printf("%.2f",max);
    return 0;
}