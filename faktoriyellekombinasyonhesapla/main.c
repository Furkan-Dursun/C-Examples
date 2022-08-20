#include <stdio.h>
#include <stdlib.h>

int fact(int x){
	int i,f=1;
	for(i=1;i<=x;i++)
	  f*=i;
	return(f);}

int kombinasyon(int a,int b){
	int c,kmb;
	c=a-b;
	kmb=fact(a)/(fact(b)*fact(c));
	return kmb;
}

int main(void) {
	int a,b;
	printf("n degerini giriniz=\n");
	scanf("%d",&a);
	printf("r degerini giriniz=\n");
	scanf("%d",&b);
	
	printf("Kombinasyon %d!/(%d!*(%d-%d)!) = %d",a,b,a,b,kombinasyon(a,b));
	
	return 0;
}
