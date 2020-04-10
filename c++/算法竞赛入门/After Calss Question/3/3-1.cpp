//得分 UVa1585
// 通过

#include<stdio.h>
#define manx 100010
#include<string.h>

char s[manx];
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s",s);
        int sum = 0,score = 0;
        
        for (int i = 0; i < strlen(s); i++)
        {
            if(s[i]=='O'){
                 score++;
                 sum +=score;
            }
            else
            {
                score=0;
            }
            
        }
        
        printf("%d\n",sum);
        
    }
    return 0;
}