/* 还是用简单暴力的字符记录方法：使用int[128]数组记录每种字符（颜色）的数量，直接将字符的值作为索引。
只用一个数组来记录。第一行记录的时候增加计数，第二行记录的时候减少计数。那么正数表示这种颜色足够，负数表示这种颜色不足。
将正数和负数分别累加。如果缺少的数量累计值为0，说明足够——可以买，否则缺少的值表示缺少了多少珠子。
 */
#include <stdio.h>
int main()
{
    char c;
    int record[128] = {0};  /* all ASCII characters */
    while((c = getchar()) != '\n')  record[(int)c]++;
    while((c = getchar()) != '\n')  record[(int)c]--;
    int more = 0, less = 0;
    for(int i = 0; i < 128; i++)
    {
        if(record[i] > 0)    more += record[i];
        if(record[i] < 0)    less -= record[i];
    }

    if(less)    printf("No %d", less);
    else        printf("Yes %d", more);

    return 0;
}
