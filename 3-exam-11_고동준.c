#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int month[4] = {28,29,30,31}; 
	int year, mon;
	
	printf("년과 달을 입력하세요. : ");
	scanf("%d%d",&year,&mon);
	
	
	
	
	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
    printf("%d년 %d월의 말일은 %d 입니다.\n", year, mon, month[3]);
   
    else if (mon == 4 || mon == 6 || mon == 9 ||  mon == 11 )
    printf("%d년 %d월의 말일은 %d 입니다.\n", year, mon, month[2]);
    
    else if(mon == 2&&(year%4==0&&year%100!=0)||year%400==0)
    printf("%d년 %d월의 말일은 %d 입니다.\n",year, mon, month[1]);
    
    else 
    printf("%d년 %d 월의 말일은 %d 입니다\n", year, mon, month[0]);
    
    
    
    
    
    
    
    
    
}
