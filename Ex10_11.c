#include <stdio.h>
#include <stdlib.h>

int coffee_machine(int button){
	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�\n");
	printf("#2. �������� �غ��Ѵ�\n");
	
	switch(button){
		case 1 : printf("#3. ����Ŀ�Ǹ� ź��\n");break;
		case 2 : printf("#3. ����Ŀ�Ǹ� ź��\n");break;
		case 3 : printf("#3. ��Ŀ�Ǹ� ź��\n");break;
		default : printf("#3. �ƹ��ų� ź��\n"); break; 
	}
	printf("#4. ���� �״´�.\n");
	printf("#5. ��Ǭ���� ��� ���δ�.\n");
	
}
void main()
{
	int coffee;
	char nickname[30];
	
	while(1){
		printf(" nickname : ");
		scanf("%s\n", nickname);
		printf(" � Ŀ�� �帱��� ? (1 : ���� 2 : ���� 3 : �� 4 : stop) : ");
		scanf("%d", &coffee);
		if(coffee == 4 ) break;
		coffee_machine(coffee);
		printf("%s �� ~ Ŀ�� ���� �ֽ��ϴ�.\n\n", nickname); 
	}
}
