#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        if(prices.size()<2) return 0;

        for(int i=0;i<prices.size()-1;i++){//买入
            if(prices[i]>prices[i-1]) continue;
            for(int j=i+1;j<prices.size();j++){//卖出
                if(prices[j]-prices[i]>max) max=prices[j]-prices[i];
            }
        }
        return max;
    }
};

int main() {
    Solution a;
    int b[]={7,1,5,3,6,4};
    vector<int> c(b,b+5);
    cout<<a.maxProfit(c);
    return 0;
}