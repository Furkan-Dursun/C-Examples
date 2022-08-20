#include <stdio.h>
#include <stdlib.h>

char *terscevir(char kelime[]){
	int uzunluk,a;
	char terskelime[50];
	uzunluk = strlen(kelime);
	
	for(a=0;a<uzunluk;a++){
		terskelime[a]=kelime[uzunluk-a-1];
		}
	printf("Tersi = %s",terskelime);
	polindromtest(kelime,terskelime);
}

int polindromtest(char kelime[] , char terskelime[]){
	int sonuc;
	sonuc=strcmp(kelime,terskelime);  //strcmp fonksiyonunda karsilastirilanlar esitse sonuc olarak 0 dondurur
	if(sonuc==0){
		printf("\nPolindromdur");
	}
	else{
		printf("\nPolindrom Degildir");
	}
	
}
int main(void) {
	
	char kelime[50];
	char terskelime[50];
	int i,a;
	
	printf("Kelimeyi Giriniz:\n");
	gets(kelime);
    terscevir(&kelime);
	return 0;
}
