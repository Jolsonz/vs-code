// 此题抄的柳的，太麻烦了不想做。
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
struct node {
    string name;
    int gp, gm, gf, g;
};
bool cmp(node a, node b) {//按照总评分数（四舍五入精确到整数）递减。若有并列，则按学号递增。
    return a.g != b.g ? a.g > b.g : a.name < b.name;
}
map<string, int> idx;//存姓名与上机合格的人，以及其在v中的下标加1

int main() {
    int p, m, n, score, cnt = 1;
    cin >> p >> m >> n;
    vector<node> v, ans;
    string s;
    for (int i = 0; i < p; i++) {//在线编程人数和分数。
        cin >> s >> score;//输入上机分数
        if (score >= 200) {
            v.push_back(node{s, score, -1, -1, 0});//还可以这样啊，直接添加node类型的数据。
            idx[s] = cnt++;//map映射保存名字所对应v中的下标
            // （为了避免与“不存在”混淆，保存下标+1，当为0时表示该学生的姓名在v中不存在）
            // 比如idx["3"]，然后3又没有对应的值，则会输出0
            // 这是一个比较常用的map上的技巧，找不到输出0，找得到就输出对应的值，所以idx要从1存起。
        }
    }
    for (int i = 0; i < m; i++) {//期中考试分数
        cin >> s >> score;
        if (idx[s] != 0) v[idx[s] - 1].gm = score;//又要减去1，因为是从1开始存起的。
    }
    for (int i = 0; i < n; i++) {//期末考试分数
        cin >> s >> score;
        if (idx[s] != 0) {//都要判断他上机满不满足条件
            int temp = idx[s] - 1;
            v[temp].gf = v[temp].g = score;
            if (v[temp].gm > v[temp].gf) v[temp].g = int(v[temp].gm * 0.4 + v[temp].gf * 0.6 + 0.5);//这个+0.5是为了四舍五入
        }
    }
    for (int i = 0; i < v.size(); i++)
        if (v[i].g >= 60) ans.push_back(v[i]);//上机不满足的条件的最后总分都是0，不用管。
    sort(ans.begin(), ans.end(), cmp);//按要求排序
    for (int i = 0; i < ans.size(); i++)
        printf("%s %d %d %d %d\n", ans[i].name.c_str(), ans[i].gp, ans[i].gm, ans[i].gf, ans[i].g);
    return 0;
}