#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int cifttopla(int m,int n){
	int i;
	int toplamcift=0;
	for(i=m;i<=n;i++){
		if(i%2==0){
			toplamcift+=i;
		}
	}
	return toplamcift;
}

int tektopla(int m,int n){
	int i;
	int toplamtek=0;
	
	for(i=m;i<=n;i++){
		if(i%2!=0){
			toplamtek+=i;
		}
	}
	return toplamtek;
}

int ortalamacift(int m,int n){
	int i;
	int toplamcift=0;
	float ortalamacift;
	int j=0;
	for(i=m;i<=n;i++){
		if(i%2==0){
			toplamcift+=i;
			j+=1;
		}
	ortalamacift=toplamcift/j;
	}
	return ortalamacift;}
	
int ortalamatek(int m,int n){
	int i;
	int toplamtek=0;
	float ortalamatek;
	float j=0;
	for(i=m;i<=n;i++){
		if(i%2!=0){
			toplamtek+=i;
			j+=1;
		}
	ortalamatek=toplamtek/j;
	}
	return ortalamatek;}


int main(void) {
	
	int m,n;
	
	printf("Hangi sayiya araligindakiler toplansin toplansin=");
	scanf("%d%d",&m,&n);
	printf("%d'den %d'e kadar olan cift sayilarin toplami=%d \nCift sayilarin ortalamasi=%d \n",m,n,cifttopla(m,n),ortalamacift(m,n));
	printf("%d'den %d'e kadar olan tek sayilarin toplami=%d \nTek sayilarin ortalamasi=%d",m,n,tektopla(m,n),ortalamatek(m,n));
	return 0;
}
