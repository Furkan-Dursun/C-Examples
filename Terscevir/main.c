#include <stdio.h>
#include <stdlib.h>

void *terscevir(char kelime[]){
	int uzunluk,a;
	uzunluk = strlen(kelime);
	
	for(a=0;a<uzunluk;a++){
		printf("%c",kelime[uzunluk-a-1]); //null('/0') degerinden bir onceki degeri al
	}
	
}
int main(void) {
	
	char kelime[50];
	int i,a;
	
	printf("Kelimeyi Giriniz:\n");
	gets(kelime);
    terscevir(&kelime);
	
	return 0;
}
