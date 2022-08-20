#include <stdio.h>
#include <stdlib.h>
int asal_topla(int a)
{
int i=0;
i=i+a;
return i;
}
int asal_bul(int n)
{
int j, flag = 1;
for(j=2; j <= n/2; ++j)
{
if (n%j == 0)
 {
 flag =0;
 break;
 }
 }
 if(flag)
 return n;
}

int main(int argc, char *argv[]) {


 int num,i,topla=0;
 printf("sayi giriniz");
 scanf("%d",&num);


 for(i=2;i<=num;i++)
 topla +=asal_topla(asal_bul(i));

 
 printf("asal sayilarin toplami %d",topla);
 return 0;
}
