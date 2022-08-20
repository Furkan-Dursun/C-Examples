#include<stdio.h>
#include<conio.h>
void degistir( int *pointer[],int *bptr[]);
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={96,20,70,60,75,55,85,34,49,13};
   int i;
   int *ptra[10],*ptrb[10];
   
  for(i=0;i<10;i++)
  {
  	  ptra[i]=&a[i];
  	  ptrb[i]=&b[i];
  }
 
    degistir(ptra,ptrb);
	
    
    getch();
    return 0;
}
void degistir( int *pointer[],int *bptr[])
{   int i;
	for(i=0;i<10;i++)
	{
		*pointer[i]=*bptr[i];
		*bptr[i]=*pointer[i];
	}
 
     }
