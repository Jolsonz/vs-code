#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int t,sum=0,k=x;
        while(x){
            t=x%10;
            x/=10;
            sum=sum*10+t;
        }
        return sum==k;
    }
};
int main() {
    Solution a;
    cout<<a.isPalindrome(121);
    return 0;
}