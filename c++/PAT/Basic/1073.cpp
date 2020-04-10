// 1073 多选题常见计分法
// 两个正整数 N（≤1000）和 M（≤100），分别是学生人数和多选题的个数
// 和1058选择题很像，这题自己写的，改错改半天。心累
/* n个学生，m道题目。
对于每一道题目，将题目的分数存储在tot[i]里面，题目的答案存储在right[i]（set)里。i相当于题号
wrong[i][j]中每个元素第i道题第j个选项的错误次数，先全置0

对于n个学生，每一个学生的答案插入一个集合st里面，比较st与right[i]是否相等，如果相等说明该生答对了，他的score += tot[i]（加上当前题目的总分）
如果该生答错了，遍历st,如果st的元素在right[j]内找不到，就把这个元素的值放到wrong[m][5]内，找得到就跳过。

输出每一个学生的得分，遍历wrong，max== 0说明没有一个人做错题目，则输出“Too simple”
否则输出max的值，和wrong数组中wrong[i] == max的那些题号
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int tot[m]={0};//每道题的得分
    int wrong[m][5]={0};//存每个道题，每个选项错的次数
    vector<set<char>> right(m);//存正确答案
    for(int i=0;i<m;i++){
        int t1,t2;
        cin>>tot[i]>>t1>>t2;//输入分数，选项个数，正确选项数
        // 然后读入正确选项
        for(int j = 0; j < t2; j++) { 
            char c;
            scanf(" %c", &c);//注意前面带空格的哦
            right[i].insert(c);
        }
    }
    for(int i=0;i<n;i++){//用于输入n个学生的答案
        double score = 0;//记录每个学生的得分,有0.5分的情况，所以用double
        int k;//输入几个答案
        scanf("\n");//读入一个回车
        for(int j = 0; j < m; j++) {//读入m个题目的答案
            if(j != 0) scanf(" ");//读入每个答案之间的空格，第一个答案无空格
            scanf("(%d", &k);//需要读入几个答案。
            set<char> st;//用来存储学生的答案
            char c;
            for(int l = 0; l < k; l++) {
                scanf(" %c", &c);
                st.insert(c);
            }
            scanf(")");
            if(st == right[j]) {//这是完全正确的情况，加全分
                score += tot[j];
            } 
            else {//不完全正确
            // 此时有两种情况，一种是答案不全，一种是有错误答案。
                int f=1;//标志位，f为1标志着对一半
                for(auto it=st.begin();it!=st.end();it++){//遍历学生答案，看答案全不全
                    if(right[j].find(*it)==right[j].end()){//答案有错
                        f=0;//有错的选项f置0
                        wrong[j][*it-'a']++;//错误答案错误次数增加
                    }
                }
                if(f) score += tot[j]/2.0;//只能拿一半分   

                // 这时候学生可能还有正确选项没有答上去，也要计数
                for(auto it=right[j].begin();it!=right[j].end();it++){//遍历正确答案，看学生哪个没填。
                    if(st.find(*it)==st.end()){//存在着答案找不到的情况
                        f=0;//有错的选项f置0
                        wrong[j][*it-'a']++;
                    }
                }
            }
        }
        printf("%.1lf\n", score);//输出每个人的分数
    }
    int max=0;//确定wrong[m][5]中错的最多的选项
    for(int i=0;i<m;i++)
        for(int j=0;j<5;j++)//5个选项
            if(wrong[i][j]>max) max=wrong[i][j];
    if(max==0) cout<<"Too simple";
    else{
        for(int i=0;i<m;i++)
            for(int j=0;j<5;j++){
                if(wrong[i][j]==max){
                    printf("%d %d-%c\n",max,i+1,j+'a');
                }
            }
    }
    return 0;
}