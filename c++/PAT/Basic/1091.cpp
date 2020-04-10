// 自守数  简单模拟，数据规模也不会溢出
//  N*K^2=XXK
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int m,k,n,i,ans=0;//题目保证n<10 ,m是待检测数数量
    cin>>m;
    while (m--)
    {
        i=0;//i储存位数
        cin>>k;
        // 需要得到k的位数i
        int b=k;
        while(b){
            b/=10;
            i++;
        }
        // int s=pow(10,i);  这里用pow会出错，我日了，为什么啊，得不到正确的数
        int s=1;
        while(i--) s*=10;
        for(n=1;n<10;n++){//题目保证n<10
            ans=n*k*k;
            if(k==ans%s){
                cout<<n<<' '<<ans<<endl;
                break;
            } 
        }
        if(n==10) cout<<"No"<<endl;
        
    }
    return 0;
}