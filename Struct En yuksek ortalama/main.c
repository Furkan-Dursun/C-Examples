#include <stdio.h>
#include <stdlib.h>

struct Ogrenci{
	int notlar;
	char isim[20];
};

int main(void) {
	int i,j,s,toplam=0;
	
	printf("Sinif mevcudu giriniz = ");
	scanf("%d",&s);
	
	struct Ogrenci ogrenciler[s];
	for(i=0;i<s;i++){
		printf("%d. ogrencinin isim ve not bilgilerini giriniz = ",i+1);
		scanf("%s %d",&ogrenciler[i].isim,&ogrenciler[i].notlar);
	}
	
	for(i=0;i<s;i++){
		toplam+=ogrenciler[i].notlar;
	}
	printf("Not ortalamasi = %d",toplam/s);
	
	
	return 0;
}
