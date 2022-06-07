#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int aa[3][4];
	int i, k;
	int val = 1;
	
    for(i=0; i<3; i++ ){
    	
	}for(k=0; k<4; k++){
          aa[i][k] = val;
          val++;
}
for(i=0; i<3; i++){
	for(k=0; k<4; k++){
		printf("%3d", aa[i][k]);
	}
	printf("\n");
}
}
