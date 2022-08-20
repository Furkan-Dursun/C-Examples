#include <stdio.h>
#include <stdlib.h>
#define true 1
#define PI 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int kenar1,kenar2;
    int yaricap;
	int secim;
	
	while(true){
		
		printf("Kare icin 1e, Daire icin 2ye , Cikmak icin 3e Basin=\n");
		scanf("%d",&secim);
		
		if(secim==1){
			printf("Kenar1 ve Kenar2 uznlugunu giriniz=\n");
			scanf("%d %d",&kenar1,&kenar2);
			printf("Dikdortgenin Alani=%d\n",kenar1*kenar2);
		}
		
		else if(secim==2){
			printf("Yaricapi Girin=\n");
			scanf("%d",&yaricap);
			printf("Dairenin Alani=%.2f\n",PI*yaricap*yaricap); }
		else{
			printf("Programdan Cikiliyor...");
			break;
		}	
			
		
		}
	
	
	
	
	return 0;
}
