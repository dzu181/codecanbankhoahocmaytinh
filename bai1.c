#include <stdio.h>
#include <curses.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i,n,x,tam =0;
	int A[100];
	printf("Nhap so phan tu: "); scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("\nA[%d]=",i);scanf("%d",&A[i]);
		if (i==0) {continue;}
		while (A[i]>A[i-1])
	{
			printf("\nNhap lai, hay nhap so nho hon");
			printf("\nA[%d]=",i);scanf("%d",&A[i]);
	}
	}
	//in day so ra man hinh
	printf("\nDay so A la: ");
	for (i=0;i<n;i++) {printf("%d ",A[i]);} 

	//chen so
	printf("\nNhap so can chen: "); scanf("%d",&x);
	n = n+1; //nhap them so thi n phai tang
	A[n-1] = x; // so chen duoc cho xuong cuoi day so
	//sap xep su dung thuat toan noi bot 1 lan duy nhat
	for (i=n-1; i>0; i--) {
		if (A[i]>A[i-1]) {
			tam = A[i];
			A[i] = A[i-1];
			A[i-1] = tam;
		}
	}
	//in day so ra man hinh	
	printf("\nDay so A la: ");
	for (i=0;i<n;i++) {printf("%d ",A[i]);}

	// in ra file
	FILE *mo;
	mo= fopen("dayso.txt","w");
	for (i=0;i<n;i++) {
		fprintf(mo, "%d ", A[i]);
	}
	fclose(mo);
	printf("\n");
	return 0;
	}




	


