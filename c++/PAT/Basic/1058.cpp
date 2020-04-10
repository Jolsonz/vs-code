// 多选题
// 参考柳诺的，注意getchar()或者说一些字符的读入。
/* n个学生，m道题目。
对于每一道题目，将题目的分数存储在tot[i]里面，题目的答案存储在right[i]（set)里。
wrong[i]存储第i-1道题错误的人数,次数
对于n个学生，每一个学生的答案插入一个集合st里面，比较st与right[i]是否相等，如果相等说明该生答对了，他的score += tot[i]（加上当前题目的总分）
如果该生答错了，wrong[i]++，表示第i道题新增一个错误的人。
输出每一个学生的得分，遍历wrong，max== 0说明没有一个人做错题目，则输出“Too simple”
否则输出max的值，和wrong数组中wrong[i] == max的那些题号
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;//n个学生，m道题目
    cin>>n>>m;
    int tot[m]={0};//存放题目的分数
    int wrong[m]={0};//存第i道题的错误人数。
    vector<set<char>> right(m);//放题目的正确答案，会自动排序，初始化m个，可以直接赋值。
    for(int i=0;i<m;i++){
        int t1,t2;//放选项个数，实际上不用管,t1,t2没啥用。
        cin>>tot[i]>>t1>>t2;//输入分数，选项个数，正确选项数
        // 然后读入正确选项
        for(int j = 0; j < t2; j++) {
            char c;
            scanf(" %c", &c);//注意前面带空格的哦
            right[i].insert(c);
        }
    }
    for(int i=0;i<n;i++){//用于输入n个学生的答案
        int score = 0,k;//记录每个学生的得分
        scanf("\n");//读入一个回车
        for(int j = 0; j < m; j++) {//读入m个题目的答案
            if(j != 0) scanf(" ");//读入每个答案之间的空格
            scanf("(%d", &k);//需要读入几个答案。
            set<char> st;
            char c;
            for(int l = 0; l < k; l++) {
                scanf(" %c", &c);
                st.insert(c);
            }
            scanf(")");
            if(st == right[j]) {
                score += tot[j];
            } else {
                wrong[j]++;
            }
        }
        printf("%d\n", score);
    }
    int max=0;//确定wrong[]中错的最多的
    for(int i=0;i<m;i++)
        if(wrong[i]>max) max=wrong[i];
    if(max==0) cout<<"Too simple";
    else{
        cout<<max;
        for(int i=0;i<m;i++){
            if(max==wrong[i]) printf(" %d",i+1);
        }
    } 
    return 0;
}