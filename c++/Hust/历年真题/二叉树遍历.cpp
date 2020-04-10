// 用前序和中序遍历构建一棵树，然后后序遍历输出。
// 这题主要是要会用中序，先序构建二叉树
#include<iostream>
#include<string>
using namespace std;
struct node
{
    char data;
    node *lchild,*rchild;
};

string pre,in;//分别存先序和中序序列
//前提，先序序列放在pre[]数组，中序序列放在in[]数组
node* creat(int preL,int preR,int inL, int inR){
    if(preL>preR)
        return NULL;//先序序列长度小于0，返回,结束底层调用。就是最后叶子节点的时候。
    node* root = new node;
    root->data=pre[preL];//把根节点的值放进去
    int k;
    for(k=inL;k<=inR;k++)
        if(in[k] == root->data)//在中序中找到根节点位置
    		break;
    int numLeft=k-inL;
    
    root->lchild = creat(preL+1,preL+numLeft,inL,k-1);
    root->rchild = creat(preL+numLeft+1,preR,k+1,inR);
    //这两步递归就连接起来了。
    return root;
}
void postOrder(node* root){
    if(root == NULL)
        return;//注意找到叶子结点了就要返回了。
    postOrder(root->lchild);
    postOrder(root->rchild);
    cout<<root->data; 
}
int main(){
    while (getline(cin,pre),getline(cin,in))
    {
        postOrder(creat(0,pre.size()-1,0,in.size()-1));
        cout<<endl;
    }
    return 0;
}