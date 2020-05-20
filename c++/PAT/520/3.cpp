#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a,b;
    int c1=0,c2=0,sum=0,sum1=0,sum2=0;//c1代表男生数量,c2代表女生数量
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a){
            c1++;
            sum1+=b;
        }
        else{
            c2++;
            sum2+=b;
        }
        sum+=b;
    }
    printf("%.1f ",(double)sum/n);
    if(c1) printf("%.1f ",(double)sum1/c1);
    else cout<<"X ";
    if(c2) printf("%.1f",(double)sum2/c2);
    else cout<<"X";
    return 0;
}