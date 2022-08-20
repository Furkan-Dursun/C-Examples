#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int ay,yil,gun;
	int day,dyil,dgun;
	int a,b;
	
	printf("Suanki Yili Giriniz:\n");
	scanf("%d",&yil);
	printf("Suanki Ayi Giriniz:\n");
	scanf("%d",&ay);
	printf("Suanki Gunu Giriniz:\n");
	scanf("%d",&gun);
	printf("Tarih:%d.%d.%d\n",gun,ay,yil);
	printf("Dogum Yiliniz:\n");
	scanf("%d",&dyil);
	printf("Dogum Ayiniz:\n");
	scanf("%d",&day);
	printf("Dogum Gununuz:\n");
	scanf("%d",&dgun);
	a=gun-dgun;
	b=ay-day;
	if(dgun>gun){
		a=gun-dgun;
	}
	printf("Yasiniz %d,%d,%d",a,b,yil-dyil);
	
	
	
	return 0;
}
