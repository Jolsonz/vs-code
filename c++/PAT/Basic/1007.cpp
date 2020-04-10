// 素数对猜想
#include<iostream>
#include<math.h>
using namespace std;
int s[100010];

int main(){
    int n,sum=0,t=0,a,b;
    cin>>n;
    for( a=2 ; a<=n ;a++){
        for( b=2 ; b<=sqrt(a); b++){//注意素数的判断条件。
            if(a%b==0) break;
        }
        if(b>sqrt(a)) s[t++]=a;
    }//打表，范围n内，有t个素数，连续的存在一个数组里
    for(int k=0; k<t ;k++){
        if(s[k+1]-s[k]==2) sum++;
    }
    cout<<sum<<endl;
    return 0;
}