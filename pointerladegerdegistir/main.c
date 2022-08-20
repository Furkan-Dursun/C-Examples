#include <stdio.h>
#include <stdlib.h>

void degerdegis(int a,int b){
	int gecici=a;
	a=b;
	b=gecici;
	printf("x=%d, y=%d\n",a,b);
	
	
}

int main(void) {
	int x=5,y=10;
	degerdegis(x,y);
	
	
	
	return 0;
}
