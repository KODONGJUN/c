#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int a,b;
	char k;
	
	printf("ù���Է� ==>");
	scanf("%d",&a);
	printf("+ - * / %");
	scanf(" %c",&k);
	printf("�ι�°�� �Է� ==>");
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
	print("0���� ������ �ȵ�");
}
     if (k=='%'){
     	if (b!=0){
		 printf("%d %% %d = %d\n",a,b,a%b);
		 }else 
		 print("0���� ������ ������ �ȳ���");
	}}






