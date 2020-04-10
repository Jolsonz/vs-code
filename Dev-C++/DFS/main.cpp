#include<cstdio>
const int maxn=30;
int n,V,maxValue=0;//物品件数n，背包容量V，最大价值maxVlaue
int w[maxn],c[maxn];//w物品重量，c物品价值
//index为当前处理物品编号
//sumW和sumC分别为当前总重量和当前总价值
void DFS(int index,int sumW,int sumC){
    if(index==n){//完成对n件物品的选择，死胡同
        if(sumW <= V && sumC>maxValue)
            maxValue=sumC;
  		return;
    }
    //岔道口
    DFS(index+1,sumW,sumC);//不选第index件物品
    DFS(index+1,sumW+w[index],sumC+c[index]);//选第index件物品
}
int main(){
    scanf("%d%d",&n,&V);
    for(int i=0;i<n;i++)
        scanf("%d",&w[i]);//重量
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);//价值
    DFS(0,0,0);//初始为0件物品，重量和价值自然都为0
    printf("%d\n",maxValue);
    return 0;
}
