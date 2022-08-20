#include <stdio.h>
#include <stdlib.h>

		
int main(void){
	
	int j=0,n,i;
	printf("Sayiyi Girin=\n");
	scanf("%d",&n);
	for(i=2;i<n+1;i++){
	
	   while(n%i==0){
		 n=(n/i);
		 j+=1;
	    }
	    
	    if(j!=0){
	    	 printf("%d^%d * ",i,j);
		}
		
	    j=0;
	    
	    }
	return 0;
	
}
	
