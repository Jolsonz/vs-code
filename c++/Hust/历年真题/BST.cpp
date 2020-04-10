// 输入中可能有重复元素，但是输出的二叉树遍历序列中重复元素不用输出。
#include<iostream>
using namespace std;
struct node{
    int data;
    node *right,*left;
};
void insert(node* &root,int data){
    if (root == NULL){
        root = new node;//先给它分配空间。
        root->data=data;
        root->left=root->right=NULL;
        return;
    }
    if(data < root->data) insert(root->left,data);
    else if (data >root->data) insert(root->right,data);
    //注意data==root->data是啥也不做，return也可以。
}
void pre(node *root){
    if(root == NULL) return;
    cout<<root->data<<' ';
    pre(root->left);
    pre(root->right);
}
void in(node *root){
    if(root == NULL) return;
    in(root->left);
    cout<<root->data<<' ';
    in(root->right);
}
void post(node *root){
    if(root == NULL) return;
    post(root->left);
    post(root->right);
    cout<<root->data<<' ';
}

int main(){
    int n,t;
    while(cin>>n){
        node *root= NULL;//这里都不用给它分配空间的。
        while(n--){
            cin>>t;
            insert(root,t);//插入
        }
        pre(root);
        putchar('\n');
        in(root);
        putchar('\n');
        post(root);
        putchar('\n');
    }
    return 0;
}