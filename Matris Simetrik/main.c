#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	
	int a,b,i,j,kontrol;
	
	printf("Matrisin Satir Sayisini Girin:");
	scanf("%d",&a);
	printf("Matrisin Sutun Sayisini Girin:");
	scanf("%d",&b);
	if(a!=b){
		printf("Lutfen Kare Matris Girin");
	}
	else{
	
	kontrol=1;
	int matris[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d. satir ve %d. sutundaki elemani girin = ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(matris[i][j]!=matris[j][i]){
				kontrol = 0;
				break;
			}
		}
	}
	
	if(kontrol==1){
		printf("Matris Simetriktir");
	} 
    else{
    	printf("Matris Simetrik Degildir");
	}
	
	}
	return 0;
}
