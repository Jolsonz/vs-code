// 1045 快速排序， 实际上用不到快速排序算法，只需要一个思想
// 果然的超时了。O(N^2)复杂度
#include<cstdio>
int a[100010],b[100010];//最多10^5个
int main(){
    int n,count=0;//count计数
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);//输入数据不相等
    for(int i=0;i<n;i++){
        int k=i;//看k左边的是不是都小于a[k],右边的是不是都大于a[k]
        int f=1;//标志位
        for(int j=k-1;j>=0;j--){//左边的
            if(a[k]<a[j]){f=0;break;}
        }
        if(!f) continue;//就不用往后看了,非主元
        for(int j=k+1;j<n;j++){
            if(a[k]>a[j]){f=0;break;}
        }
        if(f){
            b[count]=a[k];
            count++;
        }
    }
    printf("%d\n",count);
    for (int i = 0; i < count; i++)
    {
        if(i==0) printf("%d",b[i]);
        else printf(" %d",b[i]);
    }
    return 0;
}