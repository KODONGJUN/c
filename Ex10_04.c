#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int plus(int v1, int v2)
{
	int result;
	result = v1 + v2;
	return result;
}

void main()
{
	int hap;
	
	hap = plus(100,200);
	
	printf("100�� 200 �� plus() �Լ� ����� : %d\n", hap);
	
}

