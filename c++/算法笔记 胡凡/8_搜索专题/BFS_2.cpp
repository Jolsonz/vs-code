#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
const int maxn=100;
struct node{
    int x,y;
    int step;//即层数，即要几步到这个点
}S,T,Node;//S为起点,T为终点

int n,m;//行列
char maze[maxn][maxn];//迷宫
bool inq[maxn][maxn]={false};//初始化都未进过队。
int X[4]={0,0,-1,1};//增量数组
int Y[4]={-1,1,0,0};

bool judge(int x, int y){//判断是否要访问
    if(x>=n || x<0 || y>m || y<0) return false;
    if(maze[x][y]=='*' || inq[x][y]) return false;//如果遇到墙壁或0就不用访问
    return true;
}

int BFS(){//这个要返回层数，所以要返回值,不需要输入，因为起点就是S
    queue<node> q;
    q.push(S);//起点S入队
    while(!q.empty()){
        node top=q.front();
        q.pop();
        if(top.x==T.x && top.y == T.y)
            return top.step;
        for(int i=0;i<4;i++){
            int nx=top.x+X[i];
            int ny=top.y+Y[i];
            if(judge(nx,ny)){//位置有效
                Node.x=nx,Node.y=ny;
                Node.step=top.step+1;//这样入队前就得加一层
                q.push(Node);
                inq[nx][ny]=true;
            }
        }
    }
    return -1;//无法达到终点返回-1
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        getchar();//读取每行的换行符
        for(int j=0;j<m;j++){
            maze[i][j]=getchar();//因为是连着输入的，没有空格
            if(maze[i][j]=='S') S.x=i,S.y=j;
            else if(maze[i][j]=='T') T.x=i,T.y=j;
        }
       
    }
    S.step=0;
    cout<<BFS()<<endl;
    return 0;
}
/*
测试输入
5 5
.....
.*.*.
.*S*.
.***.
...T*
答案是11
*/