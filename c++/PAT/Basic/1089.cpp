// 狼人杀简单版，实际上有点恶心。
// 题目限制了必有一狼人一平民说谎。
// 这代码水平很高啊，柳小姐的，这几个数组的嵌套玩的漂亮
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);//每个人说的数字保存在v数组中
    for (int i = 1; i <= n; i++) cin >> v[i];//从1存起
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {//i,j分别代指两位狼人。
            vector<int> lie, a(n + 1, 1);//a数组表示该人是狼人还是好人，等于1表示是好人，等于-1表示是狼人。
            a[i] = a[j] = -1;
            for (int k = 1; k <= n; k++)
//从1～n分别判断k所说的话是真是假，v[k]是发言指认的人的好坏，a[abs(v[k])]是这个指定人的身份实际上的好坏。（即v[k] * a[abs(v[k])] < 0）则表示k在说谎，则将k放在lie数组中
                if (v[k] * a[abs(v[k])] < 0) lie.push_back(k);
            if (lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0) {
// 遍历完成后判断lie数组，如果说谎人数等于2并且这两个说谎的人一个是好人一个是狼人（即a[lie[0]] + a[lie[1]] == 0）表示满足题意，此时输出i和j并return
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}