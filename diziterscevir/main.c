#include<stdio.h>
void terscevir( int dizi1[], int dizi2[]){
	int i;
	for( i = 0; i < 5; i++){
		  dizi2[4-i] = dizi1[i];
				
	}
}
int main( void )
{
	int i;
	int liste1[] = { 6, 7, 8, 9, 10 };
	int liste2[5];

	terscevir( liste1, liste2 );

	for( i = 0; i < 5; i++ ) {
		printf("%d ", liste2[i]);				
	}
	printf("\n");
}


