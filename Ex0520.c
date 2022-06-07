#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int aa[4];
int hap;

 
 
 printf("첫번째 숫자 입력 : ");
 scanf("%d", &aa[0]);
 printf("두번째 숫자 입력 : ");
 scanf("%d", &aa[1]);
 printf("세번째 숫자 입력 : ");
 scanf("%d", &aa[2]);
 printf("네번째 숫자 입력 : ");
 scanf("%d", &aa[3]);
 
 hap = aa[0] + aa[1] + aa[2] + aa[3];
 printf("합계 ==> %d\n", hap);
 
 
 
 printf("aa의 주소: %d \n", aa);
 
}
