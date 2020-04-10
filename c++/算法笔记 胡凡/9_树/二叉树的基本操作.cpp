// 二叉树的储存结构
struct  node
{
    typename data;
    node* lchild;
    node* rchild;
};

// 根节点
node* root = NULL;

// 新建节点——往二叉树内插入节点时
node* newNode(int v){//v为插入的节点值
    node* n=new node;//申请一个node型变量的地址空间
    n->data=v;
    n->lchild=n->rchild=NULL;//初始条件下没有左右孩子
    return n;//返回节点的地址。
}

//二叉树的查找修改
void search(node* root ,int x, int newdata){
    if(root = NULL)
        return;//空树，递归边界
    if(root->data==x)
        root->data=newdata;//找到了，就修改
    search(root->lchild,x,newdata); //往左子树搜索
    search(root->rchild,x,newdata); //往右子树搜索
}

//二叉树结点的插入
//insert 函数将在二叉树中插入一个数据域为x的新节点
//注意用引用，不然不会插入成功。
void insert(node* &root,int x){
    if(root = NULL){ //空树，说明到了查找边界，即插入位置
        root=newNode(x);//创建一个值为x的新节点为root的指向。
        return;
    }
    if(x应插到左子树) insert(root->lchild,x);
    else insert(root->rchild,x);//插到右子树
}

这里用引用而search不用引用的原因是，search修改的是指针root指向的内容而非root本身
这个insert函数用了newNode函数，其中有 root=new node; 这一句，如果不引用就作用不到原变量上去
 