#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
	char ch1, ch2;
	int i;
	
	printf("���� ���ڸ� �Է� : ");
	gets(str);
	
	printf("���� ���ڿ� ���ο� ���� :");
	scanf("%c %c", &ch1, &ch2);
	
	for(i=0; i<strlen(str); i++){
		if(str[i]==ch1)
		str[i] = ch2;
		
	}
	printf("��ȯ��� ==> %s\n", str);
	
}
