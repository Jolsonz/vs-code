// 1071 小赌怡情 (15分)
// 就是简单模拟
#include<bits/stdc++.h>
using namespace std;
int main() {
    int T,k;//赠送给玩家的筹码数、以及需要处理的游戏次数
    cin>>T>>k;
    int n1,b,t,n2;
    while(k--){
        cin>>n1>>b>>t>>n2;//n1第一个数，b猜大小,t赌上的筹码。下注的筹码数不能超过自己帐户上拥有的筹码数，输光全部筹码后，游戏结束。n2第二个数。保证两个数字不相等
        if(T)//总筹码不为0
        {
            if(T<t){
                printf("Not enough tokens.  Total = %d.\n",T);
                continue;
            }
            if((b==0&&n1>n2)||(b==1&&n1<n2)){//说明猜对了
                T+=t;
                printf("Win %d!  Total = %d.\n",t,T);
            }
            else{//猜错了
                T-=t;
                printf("Lose %d.  Total = %d.\n",t,T);
            }
            
        }
        else{//T为0
            cout<<"Game Over.";
            break;
        }
    }
    return 0;
}