// 对有些问题，节点不多，节点地址是比较小的整数，可以用静态链表
// 即结构体数组，数组下标表示节点的地址
见PTA A1032
以及PTA B1025-1  话说这道题可以用结构体再写一遍。
这道题本身是用了一个 data[] 一个 next[]分别存数据和下个地址。
实际上定义一个结构体可以解决问题
struct node
{
    int data;
    int next;
}node[maxn];
扫描理顺序的时候就分别放进去放好就是了。
