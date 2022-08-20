#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mutlakyap(int liste[], int deger){
	int i;
	for(i=0;i<deger;i++){
		if(liste[i]<0){
			liste[i]*=-1;
		}
	}
}

int main(void) {
	int i,deger;
	int liste[20];
	printf("kac deger gireceksiniz");
	scanf("%d",&deger);
	printf("liste degerlerini giriniz");
	for(i=0;i<deger;i++){
		scanf("%d",&liste[i]);
	}
	
	mutlakyap(liste,deger);
	for(i=0;i<deger;i++){
		printf("%d ",liste[i]);
	}
	printf("\n");
	
	return 0;
}
