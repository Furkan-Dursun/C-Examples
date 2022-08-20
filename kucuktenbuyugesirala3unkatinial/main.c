#include <stdio.h>
#include <stdlib.h>

// Kullanicidan alinan liste elemanlarini kucukten buyuge siralama
// ve kullanicidan alinan sayinin katlarini liste icinden bulma

void sirala(int liste[], int deger){
	int i,j,tp;
	
	for(i=0;i <deger; i++){
		for(j=1;j< deger-i; j++){
			if(liste[j-1] > liste[j]){
			   tp=liste[j-1];
			   liste[j-1] = liste[j];
			   liste[j] = tp;
            }
       }
    }
}

void katlaribul(int liste[], int sayi, int deger){
	
	int liste2[deger];
	int i;
	for(i=0;i<deger;i++){
		if(liste[i]%sayi==0){
			printf("%d ",liste[i]);
		}
		
	}

	
}

int main(void) {
	
	int i,deger;
	int liste[100];
	
	printf("Kac tane deger gireceksiniz=\n");
	scanf("%d",&deger);
	
	printf("Degerleri sirayla bosluk birakarak girin = ");
	for(i=0;i<deger;i++){
		scanf("%d",&liste[i]);
	}
	
	sirala(liste, deger);
	printf("Sayilarin kucukten buyuge siralanisi = ");
	for(i=0;i<deger;i++){
		printf("%d ",liste[i]);
	}
	
	int sayi;
	printf("\nHangi sayinin listedeki katlarini bulmak istiyorsunuz = ");
	scanf("%d",&sayi);
	printf("Listedeki %d sayisinin kati olan elemanlar = ",sayi);
	katlaribul(liste, sayi, deger);
	
	
	
	return 0;
}
