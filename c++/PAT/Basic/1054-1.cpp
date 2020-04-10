// 求平均值，显然要用字符串来接受，同时还要判断是不是一个“合法”的输入。 [−1000,1000] 区间内的实数，并且最多精确到小数点后 2 位。 
// 我想用 stod，然后再to_string的，但是有点麻烦。double变成string后，固定保留6位小数。

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k=0;//k是合法输入数
    char a[50],b[50];
    cin>>n;
    double temp,sum=0.0;//合法输入的平均值，保留小数两位
    while (n--){
        cin>>a;
        sscanf(a,"%lf",&temp);//把a中的double正则匹配到，读入到temp中。用f是float，用lf是double。
        // 
        sprintf(b,"%.2f",temp);//把temp这个double类型的数，通过保留两位小数，放在b里
        int flage=0;
        for(int i=0;i<strlen(a);i++){
            if(a[i]!=b[i]) flage=1;//要和a能全匹配，b不一定能匹配的完
        }
        if(flage||temp>1000||temp<-1000){
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        }else{
            sum+=temp;
            k++;//合法输入数
        }
    }
    if(k == 1)
        printf("The average of 1 number is %.2f", sum);//number没有s
    else if(k > 1)
        printf("The average of %d numbers is %.2f", k, sum / k);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;
}