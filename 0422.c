#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char c;
	
	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &a);
	printf("<1>+ <2>- <3>* <4>/ <5>% : ");
	scanf("%d", &c);
	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &b);
	
	switch(c % 5){
	case 1 : printf("%d + %d = %d .\n", a, b, a+b); break;
	case 2 : printf("%d - %d = %d .\n", a ,b, a-b); break;
	case 3 : printf("%d * %d = %d .\n", a ,b, a*b); break;
	case 4 : printf("%d / %d = %f .\n", a ,b, a/(float)b); break;
	case 5 : printf("%d % %d = %d .\n", a ,b, a%b); break;
}
	 
	
}
