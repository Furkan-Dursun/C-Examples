#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char dizin1[20]={"Merhaba Nasilsin"};
	char dizin2[20]={"Iyiyim Saol"};
	
	printf("Dizin 1 boyutu = %d\n",strlen(dizin1));
	printf("Dizin 2 boyutu = %d\n",strlen(dizin2));
	
	if(strcmp(dizin1,dizin2)==0){
		printf("Ayni kelimedirler\n");
	}
	else{
		printf("Ayni kelime degillerdir\n");
	}
	
	char dizin3[30];
	strcpy(dizin3,dizin1);
	strcat(dizin3,dizin2);
	printf("%s\n",dizin3);
	printf("%s",dizin1);	
	return 0;
}
