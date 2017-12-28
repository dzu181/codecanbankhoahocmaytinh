#include <stdio.h>
#include <curses.h>
#include <math.h>
int main()
{
	int a,n=0,i,c;
	char X[100];
	printf("Nhap so nguyen: "); scanf("%d",&a);
	do
	{
		c=a%16;
		a=a/16;
		if (c==0) X[n]='0';
		if (c==1) X[n]='1';
		if (c==2) X[n]='2';
		if (c==3) X[n]='3';
		if (c==4) X[n]='4';
		if (c==5) X[n]='5';
		if (c==6) X[n]='6';
		if (c==7) X[n]='7';
		if (c==8) X[n]='8';
		if (c==9) X[n]='9';
		if (c==10) X[n]='A';
		if (c==11) X[n]='B';
		if (c==12) X[n]='C';
		if (c==13) X[n]='D';
		if (c==14) X[n]='E';
		if (c==15) X[n]='F';
		n++;
	} while (a>0);
	printf("\nSo nguyen sau do duoc chuyen sang dang hex la: ");
	for (i=n-1;i>=0;i--) {printf("%c", X[i]);}	
	printf("\n");
	return 0;
}
