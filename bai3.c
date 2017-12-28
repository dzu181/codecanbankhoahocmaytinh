#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main() 
{
	FILE *input;
	FILE *output;
	int a[100];
	int i,n;
	input = fopen("input.txt", "r");
	if (input == NULL) { 
	printf("Khong co du lieu");
	exit (0);
	}
	// doc du lieu tu file
	printf("Nhap so cac chu so trong file input.txt:"); scanf("%d",&n);
	printf("\n");
	for (i=0; i<n;i++)
	{fscanf(input, "%d", &a[i] );}
	printf("Day so ghi trong file input la: ");
	for (i=0;i<n;i++)
	{printf("%d ", a[i]);}
	fclose(input);
	printf("\n");
	//ghi du lieu vao output
	output= fopen("output.txt","w");
	printf("Du lieu trong output bay gio se la: ");
	for (i=n-1;i>=0;i--) {
		printf("%d ", a[i]);
		fprintf(output, "%d ", a[i]);
	}
	fclose(output);
	printf("\n");
	return 0;
}