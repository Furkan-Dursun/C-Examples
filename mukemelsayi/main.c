#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	
	int sayi,i;
	int toplam=0;
	
	printf("Sayiyi Girin:\n");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++){
		if(sayi%i==0)
		  toplam+=i;}
	if(toplam==sayi)
	 printf("Mukemmel sayidir %d",sayi);
	else
	 printf("Mukemmel sayi degildir %d",sayi);
		  
	
	
	
	
	
	return 0;
}
