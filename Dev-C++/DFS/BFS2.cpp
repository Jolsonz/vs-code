#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
const int maxn=100;
struct node{
    int x,y;
    int step;//����������Ҫ�����������
}S,T,Node;//SΪ���,TΪ�յ�

int n,m;//����
char maze[maxn][maxn];//�Թ�
bool inq[maxn][maxn]={false};//��ʼ����δ�����ӡ�
int X[4]={0,0,-1,1};//��������
int Y[4]={-1,1,0,0};

bool judge(int x, int y){//�ж��Ƿ�Ҫ����
    if(x>=n || x<0 || y>m || y<0) return false;
    if(maze[x][y]=='*' || inq[x][y]) return false;//�������ǽ�ڻ�0�Ͳ��÷���
    return true;
}

int BFS(){//���Ҫ���ز���������Ҫ����ֵ,����Ҫ���룬��Ϊ������S
    queue<node> q;
    q.push(S);//���S���
    while(!q.empty()){
        node top=q.front();
        q.pop();
        if(top.x==T.x && top.y == T.y)
            return top.step;
        for(int i=0;i<4;i++){
            int nx=top.x+X[i];
            int ny=top.y+Y[i];
            if(judge(nx,ny)){//λ����Ч
                Node.x=nx,Node.y=ny;
                Node.step=top.step+1;//�������ǰ�͵ü�һ��
                q.push(Node);
                inq[nx][ny]=true;
            }
        }
    }
    return -1;//�޷��ﵽ�յ㷵��-1
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        getchar();//��ȡÿ�еĻ��з�
        for(int j=0;j<m;j++){
            maze[i][j]=getchar();//��Ϊ����������ģ�û�пո�
            if(maze[i][j]=='S') S.x=i,S.y=j;
            else if(maze[i][j]=='T') T.x=i,T.y=j;
        }
       
    }
    S.step=0;
    cout<<BFS()<<endl;
    return 0;
}
