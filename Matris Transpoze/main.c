#include <stdio.h>
#include <conio.h>

 
int main(){
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
    		printf("%d ",transpoze[i][j]);
		}
		printf("\n");
	}
    
    
    return 0;
}
