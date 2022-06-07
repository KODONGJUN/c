#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ss[20];
	char tt[20];
	
	int r1, r2;
	
	puts("첫번째 문자열 입력 ");
	gets(ss);
	
	puts("두번째 입력");
	gets(tt);
	
	r1 = strlen(ss);
	r2 = strlen(tt) ;
	
	printf("첫번째 문자열 길이 ==> %d\n", ss);
	printf("두번째 문자열 길이 ==>%d\n", tt);
	if (strcmp(ss,tt) == 0)
	puts("두문자열 내용 같음\n");
	
	else
	puts("내용 다름\n");
}
