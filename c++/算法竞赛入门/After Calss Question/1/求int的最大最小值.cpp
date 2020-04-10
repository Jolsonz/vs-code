// 最小值即是最高位为1，其余位为0，所以最大值+1之后就变成了最小值
#include <iostream>

using namespace std;

int main(){
    int i = 0, min, max;
    while(1){
        if(i+1<=0){
            max = i;
            min = i+1;
            break;
        }
        i++;
    }
    cout << "min is " << min <<endl;
    cout << "max is " << max << endl;
    getchar();
    return 0;
}
/*
结果
min is -2147483648
max is 2147483647
*/