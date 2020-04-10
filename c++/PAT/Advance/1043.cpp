#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node *left, *right;//左右指针域
};
void insert(node* &root,int data){//加引用因为要修改。
    if(root==NULL){
        root=new node;//给root指针指向的地址分配一个node空间。因为给指针本身没必要分配空间的
        root->data=data;
        root->left=root->right=NULL;
        return;
    }
/*     if(data > root->data) insert(root->right,data);
    else insert(root->left,data);
    不能这么写，因为题目要求与根节点相同的要插到右子树里。
     */
    if(data < root->data) insert(root->left,data);
    else insert(root->right,data);
}
void PreOder(node* root,vector<int>&vi){//root不用加引用，只是遍历，vector要加，因为要存
    if(root==NULL) return;
    vi.push_back(root->data);
    PreOder(root->left,vi);
    PreOder(root->right,vi);
}
void PreOderMirror(node* root,vector<int>&vi){//镜像
    if(root==NULL) return;
    vi.push_back(root->data);
    PreOderMirror(root->right,vi);//变成先右后左
    PreOderMirror(root->left,vi);
}
void PostOrder(node*root,vector<int>&vi){//后序
    if(root==NULL) return;
    PostOrder(root->left,vi);
    PostOrder(root->right,vi);
    vi.push_back(root->data);
    //先左再右再根节点。
}
void PostOrderMirror(node*root,vector<int>&vi){//镜像
    if(root==NULL) return;
    PostOrderMirror(root->right,vi);
    PostOrderMirror(root->left,vi);
    vi.push_back(root->data);
    //先右再左再根节点。
}

vector<int> origin,pre,preM,post,postM;//origin是原始序列

int main(){
    node *root = NULL;//根节点
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        origin.push_back(t);
        insert(root,t);//直接把输入的插入到BST里
    }
    PreOder(root,pre);
    PreOderMirror(root,preM);
    PostOrder(root,post);
    PostOrderMirror(root,postM);
// vector还有一个好处，可以方便的相互比较，如果用数组就得一个一个来比。
    
    if(origin == pre){
        cout<<"YES\n"<<post[0];//输出后序的第一个
        for(int i=1;i<post.size();i++)
            cout<<' '<<post[i];
    }
    else if(origin == preM){//那就输出镜像后缀
        cout<<"YES\n"<<postM[0];//输出后序的第一个
        for(int i=1;i<postM.size();i++)
            cout<<' '<<postM[i];
    }
    else cout<<"NO\n";
    return 0;
    
}