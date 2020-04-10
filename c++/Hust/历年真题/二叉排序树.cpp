// 它要输出父节点，那么在插入的时候跟个指针指着父节点就是。
#include<iostream>
using namespace std;
struct node{
    int data;
    node *left, *right;
};
node *Father = new node;//指着父节点。注意一定要给它分配一个空间。

void insert(node* &root,int data,node* f){
    if(root == NULL){//就插这儿
        root = new node;
        root->data=data;
        cout<<f->data<<endl;
        root->left=root->right=NULL;
        return;
    }
    if(data< root->data){
        insert(root->left,data,root);
    }
    else{
        insert(root->right,data,root);
    }
}
//不用写creat函数，输入数据的时候就插进去
int main(){
    int n,t;
    cin>>n;
    node *root=NULL;//创建根节点，空树
    for(int i=0;i<n;i++){
        cin>>t;
        Father->data=-1;
        insert(root,t,Father);//插入
    }
    return 0;
}