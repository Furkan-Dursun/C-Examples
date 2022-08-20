
#include<stdio.h>
#include<string.h>
 
int main() {
   char kelime[100][100], gecici[100];
   int sayi,i, j;
 
   printf("\nKac farkli kelime gireceksiniz : ");
   scanf("%d",&sayi);
   printf("\%d tane kelimeyi bosluk kullanarak sirayla giriniz:\n",sayi);
   for (i = 0; i < sayi; i++)
      scanf("%s", kelime[i]);
 
   for (i = 1; i < sayi; i++) {
      for (j = 1; j < sayi; j++) {
         if (strcmp(kelime[j - 1], kelime[j]) > 0) {
            strcpy(gecici, kelime[j - 1]);
            strcpy(kelime[j - 1], kelime[j]);
            strcpy(kelime[j], gecici);
         }
      }
   }
   printf("\nSiralanmis hali : ");
   for (i = 0; i < sayi; i++)
      printf("\n%s", kelime[i]); 
}
