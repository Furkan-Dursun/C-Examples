#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sayitopla(int n){
	int i;
	int toplam=0;
	for(i=1;i<=n;i++){
		toplam+=i;
	}
	return toplam;
}

int main(void) {
	
	int n;
	
	printf("Hangi sayiya kadar toplansin=");
	scanf("%d",&n);
	printf("1'den %d'e kadar olan sayilarin toplami=%d",n,sayitopla(n));
	
	
	return 0;
}
