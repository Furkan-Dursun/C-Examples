#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int eular(int e){
	int x;
	int i,a;
	for(x=0;x<e-2;x++){
		a=x*x+x+e;
		printf("%d\n",a);
	 for(i=2;i<a;i++){
			if(a%i==0){
				return 0;
			}
			else{
				return 1;
			}
			
		}
	}	
	
}




int main(void) {
	int e;
	int sonuc;
	printf("eular sayisini girin");
	scanf("%d",&e);
	sonuc=eular(e);
	if(sonuc==1){
		printf("%d eulardir",e);
	}
	else{
		printf("%d eular degildir",e);
	}
	
	
	
	
	
	return 0;
}
