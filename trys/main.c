#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Araba{
	int model;
	int beygir;
	char isim[];
};


int main(void) {
	int i,j;
	
	struct Araba arabalar[3];
	struct Araba gecici;
	for(i=0;i<3;i++){
	    printf("%d. arabanin sirasiyla model beygir ve isim bilgilerini girin\n=",i+1);
	    scanf("%d %d %s",&arabalar[i].model,&arabalar[i].beygir,&arabalar[i].isim);
	}
	
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(arabalar[i].model>arabalar[j].model){
				gecici.model=arabalar[i].model;
				arabalar[i].model=arabalar[j].model;
				arabalar[j].model=gecici.model;
				
			}
		}
	}
	
	for(i=0;i<3;i++){
		printf("%d",arabalar[i].model);
	}
	printf("\n");
	
	
	return 0;
}
