/* A除以B，问题是A最多有1000位，我的想法是从最高位除来得结果 
借鉴的*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{    
	char A[1000], Q[1000]; //Q商
	int B, R = 0;//R余数
	int i, j, len;    

	scanf("%s%d", A, &B);    
	len = strlen(A);    
	for (i = 0, j = 0; j < len; i++, j++)
    // i是Q的指针，j是A的指针
	{        
		Q[i] = (A[j] + 10 * R - '0') / B + '0';        
		R = (A[j] + 10 * R - '0') % B;        
		if (i == 0 && Q[i] == '0')
        //如果Q的第一个数是0，不可能第一个输出0的，所以不记录这个数，指针重新移回0，覆盖它。
		{            
			i--;        
		}    
	}    
	Q[i] = '\0';//Q的最后加个结尾符，不然输出的时候不知道停的。
	len = strlen(Q);
	if (!len)    
	{        
		printf("0 %d\n", R);//len=0就说明Q里面没有元素，就输出这个，注意这个特殊情况
	}    
	else    
	{        
		printf("%s %d\n", Q, R);    
	}    

	return 0;

}