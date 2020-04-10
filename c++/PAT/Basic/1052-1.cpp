// 参考柳婼的
// 值得好好体会一番，vector的优越性。
// 以及substr也挺好用的
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<string> > v;//二维字符数组V
    for(int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        vector<string> row;
        int j = 0, k = 0;
        while(j < s.length()) {
            if(s[j] == '[') {
                while(k++ < s.length()) {//这里k++要比这个if判断要早才行。
                    if(s[k] == ']') {
                        row.push_back(s.substr(j+1, k-j-1));//把[j+1,k-1]这一段给push进去，长度当然是k-1-(j+1)+1=k-j-1了。
                        break;
                    }
                }
            }
            j++;
        }
        v.push_back(row);//一次性压进去一个一位字符数组。相当于压进去一行。
    }
    int n;
    cin >> n;
    while(n--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if(a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << v[0][a-1] << "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
    }
    return 0;
}