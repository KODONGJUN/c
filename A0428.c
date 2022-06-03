#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int a,b;
	char k;
	
	printf("첫값입력 ==>");
	scanf("%d",&a);
	printf("+ - * / %");
	scanf(" %c",&k);
	printf("두번째값 입력 ==>");
	scanf("%d",&b);
	
	if(k=='+'){
		printf("%d + %d = %d\n",a,b,a+b);
	}  if (k=='-'){
		printf("%d - %d = %d\n",a,b,a-b);
	} if (k=='*'){
		printf("%d * %d = %d\n",a,b,a*b);
	} if (k=='/'){
		if(b!=0){
		printf("%d / %d = %f\n",a,b,a/(float)b);
	}else 
	print("0으로 나누면 안돼");
}
     if (k=='%'){
     	if (b!=0){
		 printf("%d %% %d = %d\n",a,b,a%b);
		 }else 
		 print("0으로 나누면 나머지 안나옴");
	}}






