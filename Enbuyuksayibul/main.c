#include <stdio.h>
#include <stdlib.h>
#define true 1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int sayi;
	int enbuyuk=0;

	
	while(true){
		
		printf("Sayiyi Girin=\n");
		scanf("%d",&sayi);

		if(sayi>enbuyuk)
		  enbuyuk=sayi;
		  
		else if(sayi<0){
			printf("En buyuk sayi=%d",enbuyuk);	
		    break;
		}
		
		
	}
	
	
	
	return 0;
}
