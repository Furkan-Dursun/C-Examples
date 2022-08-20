#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



float kombinasyon(int k){
	
	int i,j=1;
	for(i=2;i<=k;i++)
	 j=j*i;
	return(j);
}


int main(void) {
	
	int n,r;
	float kom;
	
	printf("n degeri:\n");
	scanf("%d",&n);
	printf("r degeri:\n");
	scanf("%d",&r);
	
	kom=kombinasyon(n)/(kombinasyon(r)*kombinasyon(n-r));
	printf("kombinasyon= %.2f",kom);
	
	
	
	return 0;
}
