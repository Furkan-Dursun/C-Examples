#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	{
int a,b,c;
printf("Bir sayi girin..........>");
scanf("%d",&a);
printf("Bir sayi daha  girin..........>");
scanf("%d",&b);
c=pow(a,b);
printf("Sonuc..........>%d",c);
}
	return 0;
}
