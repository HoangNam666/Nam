#include <stdio.h>
int main (){
int n,S=0,m;
printf("nhap n\n");
scanf ("%d",&n);
while (n>0)
{
m=n%10;
S=S+m;
n=n/10;
	
}
printf("\nTong cac  so cua so da cho = %d",S);  

	return 0;
}