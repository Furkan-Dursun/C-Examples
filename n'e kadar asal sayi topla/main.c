#include <stdio.h>
#include <stdlib.h>

		
int main(void){
	int j=0,n;
	printf("Sayiyi Girin=\n");
	scanf("%d",&n);
	
	while(n%2==0){
	
		n=n/2;
		j+=1;
	  }
	printf("2^%d",j);
	
	
	return 0;
	
}
	
	
	
