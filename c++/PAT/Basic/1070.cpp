//结绳 哈夫曼树
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n]={0};
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    double sum=s[0];
    for(int i=1;i<n;i++){
        sum=sum/2+s[i]/2.0;
    }
    printf("%d",(int)sum);
    return 0;
}