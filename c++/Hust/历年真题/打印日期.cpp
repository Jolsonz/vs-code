// 其实也就是个判断闰年
#include<iostream>
using namespace std;
int main(){
    int y,n,i;
    int m1[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int m2[14]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    while(cin>>y>>n){
        if(y%400==0 || (y%4==0 && y%100!=0)){
            for(i=1;n>m2[i];i++)
                n-=m2[i];
            printf("%04d-%02d-%02d\n",y,i,n);
        }
        else{
            for(i=1;n>m1[i];i++)
                n-=m1[i];
            printf("%04d-%02d-%02d\n",y,i,n);
        }
    }
    return 0;
}