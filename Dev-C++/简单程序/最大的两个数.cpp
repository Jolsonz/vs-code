//4��5��
#include<iostream>
using namespace std;
int main(){
    int n;//��������
    cin>>n;
    int m[4][5];//4��5��
    int ans[2][5];//�𰸾���
    while (n--){
        for(int i=0;i<4;i++)
            for (int j=0; j<5;j++)
                cin>>m[i][j];
        for(int j=0;j<5;j++){
            int max1=-1000000,max2=-1000000;//�ȶ��嵽��С
            for(int i=0;i<4;i++){
                if(m[i][j]>max1 && m[i][j]>max2){
                    if(max1>=max2) max2=m[i][j];
                    else{
                        max1=max2;
                        max2=m[i][j];
                    }
                }
                else if(m[i][j]>max1){
                    max1=max2;
                    max2=m[i][j];
                }
                else if(m[i][j]>max2){
                    max2=m[i][j];
                }
            }
            ans[0][j]=max1;
            ans[1][j]=max2;
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<5;j++)
                cout<<ans[i][j]<<' ';
            cout<<endl;
        }
    }
    return 0;
}
