#include<cstdio>
const int maxn=30;
int n,V,maxValue=0;//��Ʒ����n����������V������ֵmaxVlaue
int w[maxn],c[maxn];//w��Ʒ������c��Ʒ��ֵ
//indexΪ��ǰ������Ʒ���
//sumW��sumC�ֱ�Ϊ��ǰ�������͵�ǰ�ܼ�ֵ
void DFS(int index,int sumW,int sumC){
    if(index==n){//��ɶ�n����Ʒ��ѡ������ͬ
        if(sumW <= V && sumC>maxValue)
            maxValue=sumC;
  		return;
    }
    //�����
    DFS(index+1,sumW,sumC);//��ѡ��index����Ʒ
    DFS(index+1,sumW+w[index],sumC+c[index]);//ѡ��index����Ʒ
}
int main(){
    scanf("%d%d",&n,&V);
    for(int i=0;i<n;i++)
        scanf("%d",&w[i]);//����
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);//��ֵ
    DFS(0,0,0);//��ʼΪ0����Ʒ�������ͼ�ֵ��Ȼ��Ϊ0
    printf("%d\n",maxValue);
    return 0;
}
