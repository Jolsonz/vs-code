#include <cstdio>
#include <queue>
using namespace std;
const int maxn=1000;
struct node{
    int x,y;
}Node;//ֱ�ӾͶ�����һ����

int n,m;//����Ĵ�С
int matrix[maxn][maxn];//0,1������Ϊ���Ȳ�֪��n,m��С������ֱ�ӿ����ֵ��
//��������鷳������vector< vector<int> >��ʵ�ֶ�ά���顣
//Ҳ������m,n���ٶ��塣
bool inq[maxn][maxn] = {false};//��¼{x,y}�Ƿ������
int X[4]={0,0,-1,1};//��������
int Y[4]={-1,1,0,0};

bool judge(int x, int y){//�ж��Ƿ�Ҫ����
    if(x>=n || x<0 || y>m || y<0) return false;
    if(matrix[x][y]==0 || inq[x][y]) return false;//����ӻ�0�Ͳ��÷���
    return true;
}

bool BFS(int x,int y){
    queue<node> q;
    Node.x=x,Node.y=y;
    q.push(Node);
    inq[x][y]=true;
    while(!q.empty()){
    	node top = q.front();
    	q.pop();
    	for(int i=0;i<4;i++){
    		int nx=top.x+X[i];
    		int ny=top.y+Y[i];
    		if(judge(nx,ny)){//��λ����Ҫ����
				Node.x=nx,Node.y=ny;
				q.push(Node);
				inq[nx][ny]=true; 
			}
		}
	}
} 

//Ȼ�󿴵����˶��ٴ�BFS��֪���ж��ٸ�����

int main(){
	int ans=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&matrix[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			if(matrix[i][j]==1&& inq[i][j]==false){
				ans++;
				BFS(i,j);
			}
		}
	printf("%d\n",ans);
	return 0;
}



 
