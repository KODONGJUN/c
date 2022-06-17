#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calc(int v1, int v2, int op)
{
	int result;
	
	switch(op)
	{
		case1 : result = v1 + v2;break;
		case2 : result = v1 - v2;break;
		case3 : result = v1 * v2;break;
		case4 : result = v1 / v2;break;
	}
	return result;
}

void main()
{
	int res;
	int oper, a, b;
	
	printf("계산 입력 (1 : +, 2 : -, 3 : *, 4 : /) : ");
	scanf("%d", &oper);
	 
	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);
	
	res = calc(a, b, oper);
	
	printf("계산 결과는 : %d\n", res); 
}
