#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int aa[100], bb[100];
	int i;
	
	for ( i =0; i<100;i++) {
		aa[i]= i *2;
	}
	for ( i =0; i<100;i++) {
		bb[i]= aa[99-i];
		printf("bb[0]ดย %d, bb[99]ดย %d");
	}
	
	
	
	
	
	
	
	
	
	
}
