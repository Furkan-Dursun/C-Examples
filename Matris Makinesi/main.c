#include <stdio.h>
#include <stdlib.h>

void topla();
void cikar();
void carp();
void simetri();
void transpoze();


int main(void) {
	int islem;
	
	printf("******** Matris Makinesi ********\n");
	printf("	1-Topla\n");
	printf("	2-Cikar\n");
	printf("	3-Carp\n");
	printf("	4-Simetrigini Kontrol Et\n");
	printf("	5-Transpozesini Al\n");
	
	printf("\n Islemi Seciniz=");
	scanf("%d",&islem);
	
	switch(islem){
		case 1: topla();
		break;
		
		case 2: cikar();
		break;
		
		case 3: carp();
		break;
		
		case 4: simetri();
		break;
		
		case 5: transpoze();
		break;
		
		default:
			printf("Gecersiz Islem");
	}
	
	return 0;
}

//***********************************************************************************************
void topla(){
	int i,j;
	int a,b,c,d;
	printf("1.Matrisin Satir Sayisi:\n");
	scanf("%d",&a);
	printf("1.Matrisin Sutun Sayisi:\n");
	scanf("%d",&b);
	printf("2.Matrisin Satir Sayisi:\n");
	scanf("%d",&c);
	printf("2.Matrisin Sutun Sayisi\n");
	scanf("%d",&d);
	
	int mat1[a][b],mat2[c][d],matsonuc[a][b];
	
	if(a!=c && b!=d){
		printf("***Hata!!! Matris Mertebeleri Esit Olmali***");
	}
	else{
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("1. Matrisin %d satir ve %d. sutununun elemani:",i+1,j+1);
				scanf("%d",&mat1[i][j]);
			}
		}
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("2. Matrisin %d satir ve %d. sutununun elemani:",i+1,j+1);
				scanf("%d",&mat2[i][j]);
			}
		}
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				matsonuc[i][j]=mat1[i][j] + mat2[i][j];
				printf("%2d ",matsonuc[i][j]);
			}
			printf("\n");
		}
		
		
	}
}
//********************************************************************************************
void cikar(){
		int i,j;
	int a,b,c,d;
	printf("1.Matrisin Satir Sayisi:\n");
	scanf("%d",&a);
	printf("1.Matrisin Sutun Sayisi:\n");
	scanf("%d",&b);
	printf("2.Matrisin Satir Sayisi:\n");
	scanf("%d",&c);
	printf("2.Matrisin Sutun Sayisi\n");
	scanf("%d",&d);
	
	int mat1[a][b],mat2[c][d],matsonuc[a][b];
	
	if(a!=c && b!=d){
		printf("***Hata!!! Matris Mertebeleri Esit Olmali***");
	}
	else{
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("1. Matrisin %d satir ve %d. sutununun elemani:",i+1,j+1);
				scanf("%d",&mat1[i][j]);
			}
		}
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("2. Matrisin %d satir ve %d. sutununun elemani:",i+1,j+1);
				scanf("%d",&mat2[i][j]);
			}
		}
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				matsonuc[i][j]=mat1[i][j] - mat2[i][j];
				printf("%2d ",matsonuc[i][j]);
			}
			printf("\n");
		}
		
		
	}
	
}
//***********************************************************************************************

void carp(){
	
		int i,j;
	int a,b,c,d;
	printf("1.Matrisin Satir Sayisi:\n");
	scanf("%d",&a);
	printf("1.Matrisin Sutun Sayisi:\n");
	scanf("%d",&b);
	printf("2.Matrisin Satir Sayisi:\n");
	scanf("%d",&c);
	printf("2.Matrisin Sutun Sayisi\n");
	scanf("%d",&d);
	
	int mat1[a][b],mat2[c][d],matsonuc[a][b];
	
	if(a!=c && b!=d && a!=b){
		printf("***Hata!!! Kare Matris Olmali***");
	}
	else{
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("1. Matrisin %d satir ve %d. sutununun elemani:",i+1,j+1);
				scanf("%d",&mat1[i][j]);
			}
		}
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("2. Matrisin %d satir ve %d. sutununun elemani:",i+1,j+1);
				scanf("%d",&mat2[i][j]);
			}
		}
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				matsonuc[i][j]=mat1[i][j] * mat2[i][j];
				printf("%2d ",matsonuc[i][j]);
			}
			printf("\n");
		}
		
		
	}
}
//********************************************************************************************

void transpoze(){
	int a,b,i,j;
    
    printf("Matris Satir Sayisini Girin:");
    scanf("%d",&a);
    printf("Matrisin Sutun Sayisini Girin:");
    scanf("%d",&b);
    
    int matris[a][b], transpoze[b][a];
    
    for(i=0;i<a;i++){
    	for(j=0;j<b;j++){
    		printf("%d. satirin %d. sutunundaki elemani girin:",i+1,j+1);
    		scanf("%d",&matris[i][j]);
		}
	}
    
    for(i=0;i<a;i++){
    	for(j=0;j<b;j++){
    		transpoze[j][i]=matris[i][j];
		}
	}
	
	printf("\nMatris\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
    
    printf("Transpoze\n");
    for(i=0;i<a;i++){
    	for(j=0;j<b;j++){
    		printf("%2d ",transpoze[i][j]);
		}
		printf("\n");
	}
}
//*********************************************************************************
void simetri(){
	
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
}
//*****************************************************************************************




















