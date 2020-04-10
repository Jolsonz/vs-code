// 这种排序不好用sort实现
// 共需进行n趟操作，每趟把[i,n]中的最小元素选出来与A[i]交换
void selectsort(){
    for(int i=1;i<=n;i++){//进行n趟操作
        int k=i;
        for(int j=i;j<=n;j++){
            if(A[k]>A[j]) k=j;//A[j]小，于是k取值j
        }
    }
    int temp=A[i];
    A[i]=A[k];
    A[k]=temp;
}