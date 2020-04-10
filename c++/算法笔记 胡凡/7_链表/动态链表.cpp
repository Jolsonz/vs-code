//实际上在处理数据不多的情况下，避免麻烦可以空间换时间，用打表的方法。具体可以见B1025，反转链表。
#include<stdio.h>
#include<stdlib.h>//new等操作在这个头文件下
struct node
{
    int data;
    node* next;
};

node* create(int array[]){
    node *p, *pre, *head;//pre保存当前节点的前驱节点，head为头结点
    head = new node;
    head->next= NULL;//初始化，head不需要data
    pre=head;
    for(int i=0;i<5;i++){
        p=new node;
        p->data=array[i];
        p->next=NULL;
        pre->next=p;//这一步给连起来了
        pre=p;//这一步是使P作为下个节点的前驱节点。
    }
    return head;
}
int main(){
    int array[5] = {5,3,6,1,2};
    node* L = create(array);
    do
    {
        L=L->next;//因为头结点不带数据，所以多走一步是正常的。
        printf("%d",L->data);
    }while(L->next!=NULL);
    return 0;
}