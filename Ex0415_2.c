#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	
	if (a % 2 == 0){
		printf("짝수를 입력했군요..\n");
	}
	else {
		printf("홀수를 입력했군요..\n")
	}
}
