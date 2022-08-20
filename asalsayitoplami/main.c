#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	
	int i,n,toplam=0;
	
	printf("Sayi:");
	scanf("%d",&i);
	
	for(n=2;n<i;n++);{
	    if(i%n!=0){
	   	   toplam+=n;
	   }
    }
	printf("%d",toplam);
	
	
	return 0;
}
