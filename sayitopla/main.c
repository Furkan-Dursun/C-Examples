#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int n,i;
	
	printf("Nereye Kadar toplansin:");
	scanf("%d",&n);
	
	int toplam=0;
	for(i=1;i<=n;i++){
		if(i%2 != 0)
		  toplam+=i;
	}
    printf("%d",toplam);
	return 0;
}
