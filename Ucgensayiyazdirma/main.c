#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i;
	int j;
	
	for(i=1;i<=8;i++){
		
		for(j=i;j>=1;j--)
		   printf("%3d",j);
		printf("\n");
	}
	
	
	return 0;
}
