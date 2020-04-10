/* 
两个新函数
strchr(s,buf[i]) 在前一个字符串中查后一个字符的位置，没有就返回NULL
sprintf(s,"",) 把东西打印到字符串s中

 */

#include<string.h>
#include<cstdio>
int main(){
    char s[20],buf[99];//s是输入的集合，puff是竖式中所有的集合
    int count = 0;//记录答案总数
    scanf("%s",s);//C语言输入字符串
    for (int abc = 100; abc <= 999; abc++)
    {
        for(int de = 10 ; de<= 99 ;de++){
            int x = abc*(de%10), y = abc*(de/10) , z = abc*de;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);//sprintf，输出到字符串里
            int ok =1 ;//标志位，表示是答案
            for(int i =0 ; i<strlen(buf);i++)
                if(strchr(s,buf[i]) == NULL) ok=0;
            if(ok){
                count++;
                printf("<%d>\n",count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);

            }
        }
    }
    printf("The number of solutions = %d",count);
    return 0;
}