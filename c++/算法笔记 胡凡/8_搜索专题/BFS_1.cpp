#include <cstdio>
#include <queue>
using namespace std;
const int maxn=1000;
struct node{
    int x,y;
}Node;//直接就定义了一个。

int n,m;//矩阵的大小
int matrix[maxn][maxn];//0,1矩阵。因为事先不知道n,m大小，所以直接开最大值。
//如果不嫌麻烦可以用vector< vector<int> >来实现二维数组。
//也可输入m,n后再定义。
bool inq[maxn][maxn] = {false};//记录{x,y}是否入过队
int X[4]={0,0,-1,1};//增量数组
int Y[4]={-1,1,0,0};

bool judge(int x, int y){//判断是否要访问
    if(x>=n || x<0 || y>m || y<0) return false;
    if(matrix[x][y]==0 || inq[x][y]) return false;//如果队或0就不用访问
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
    		if(judge(nx,ny)){//新位置需要访问
				Node.x=nx,Node.y=ny;
				q.push(Node);
				inq[nx][ny]=true; 
			}
		}
	}
} 

//然后看调用了多少次BFS就知道有多少个块了

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



 