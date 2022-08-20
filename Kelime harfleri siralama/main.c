#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	char kelime[20];
	char gecici;
	int i,j,uzunluk;
	
	printf("Kelimeyi Girin:");
	scanf("%s",&kelime);
	uzunluk=strlen(kelime);
	
	for( i = 0 ; i < uzunluk - 1; i++ )
      {
            for( j = i+1 ; j < uzunluk; j++ )
          {
              if( kelime[i] > kelime[j] )
              {
                  gecici = kelime[i];
                  kelime[i] = kelime[j];
                  kelime[j] = gecici;
              }
          }
      }
 
      printf("\nHarflerinin siralamasi %s",kelime);
	
	return 0;
}
