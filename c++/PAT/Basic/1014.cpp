/*  福尔摩斯的约会
本质上还是个字符串问题，先用C语言写一遍
自己写的，写一个For循环有点问题，写两个可以。有点难度
 */

#include<cstdio>
int main(){
    char s1[60],s2[60],s3[60],s4[60];
    char week[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
    int a,f=0,hour=0;
    for (int i = 0; i <= 60; i++)//比较浅两个字符
    {
        if(s1[i]==s2[i]&&f!=2){//前两个字符串
            if(!f && s1[i]>='A'&&s1[i]<='G'){//一周7天
            a=s1[i]-'A';
            printf("%s ",week[a]); //输出星期几
            f=1;//标志位变
            continue;
            }
            if (f==1 && s1[i]>='0'&&s1[i]<='9')//0-9小时
            {
                hour=s1[i]-'0';
                printf("%02d:",hour);
                break;
            }
            else if(f==1 && s1[i]>='A'&&s1[i]<='N'){//10-23小时
                hour=(s1[i]-'A')+10;
                printf("%02d:",hour);
                break;//后面再相同也没有
            }
        }
    }
    // 本来打算用一个for循环解决的，但是太麻烦了，反正问题规模不大，写两个也没事。
    for(int i=0;i<60;i++){
        if(s3[i]==s4[i]&&((s3[i]>='a'&&s3[i]<='z')||(s3[i]>='A'&&s3[i]<='Z'))){//后两个字符串比较，不过结果要先存着，不然影响输出顺序
        // 上面这个地方判断字母可以用ctype   
            printf("%02d",i);//一定要输出两位,i=2要输出02
            break;
        }
    }

    return 0;
}