#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ss[20];
	char tt[20];
	
	int r1, r2;
	
	puts("ù��° ���ڿ� �Է� ");
	gets(ss);
	
	puts("�ι�° �Է�");
	gets(tt);
	
	r1 = strlen(ss);
	r2 = strlen(tt) ;
	
	printf("ù��° ���ڿ� ���� ==> %d\n", ss);
	printf("�ι�° ���ڿ� ���� ==>%d\n", tt);
	if (strcmp(ss,tt) == 0)
	puts("�ι��ڿ� ���� ����\n");
	
	else
	puts("���� �ٸ�\n");
}
