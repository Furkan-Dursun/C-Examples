#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int i,j;
	
	int matrisa[10][10],matrisb[10][10],matrisc[10][10];
	
	
	for(i=1;i<=3;i++)
    	for(j=1;j<=3;j++){
			
			printf("%d. Satir Elemani, %d. Sutun Elemani=",i,j);
			scanf("%d",&matrisa[i][j]);
		}
			printf("\n2. Matris\n");
			
            for(i=1;i<=3;i++)
            for(j=1;j<=3;j++)
            {
            printf("%d. Satir Elemani, %d. Sutun Elemani=",i,j);
            scanf("%d",&matrisb[i][j]);}
				  
				  printf("\n\nMatrisler Toplami=\n");
				  for(i=1;i<=3;i++){
				  for(j=1;j<=3;j++){
						matrisc[i][j]=matrisa[i][j]+matrisb[i][j];
						printf("%3d",matrisc[i][j]);
						
					}
					printf("\n");
					}
	return 0;
}
