#include <stdio.h>
#include <curses.h>
#include <math.h>

void inMang (int A[], int n)
{
    int i;
    printf("\nDay so da sap xep la: ");
    for (i=0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort_tangdan(int A[], int n) {
	int i,j,k,step=1,min,c,temp=0;
	for (i=0;i<n-1;i++)
	{
		min=A[i];c=i;
		for (j=i+1;j<n;j++)
		{
			if (min>A[j]) {min=A[j];c=j;}
		}
		if (c!=i) {temp=A[i];A[i]=A[c];A[c]=temp;}
		printf("\nBuoc %d: ",step); // trinh bay buoc sap xep
		printf("\n");
		for (k=0;k<n;k++) {printf("%d ",A[k]);}
		step++; //chuan bi cho buoc sap xep tiep theo
	}
}

void selectionSort_giamdan(int A[], int n) {
	int i,j,k,step=1,max,c,temp=0;
	for (i=0;i<n-1;i++)
	{
		max=A[i];c=i;
		for (j=i+1;j<n;j++)
		{
			if (max<A[j]) {max=A[j];c=j;}
		}
		if (c!=i) {temp=A[i];A[i]=A[c];A[c]=temp;}
		printf("\nBuoc %d: ",step); // trinh bay buoc sap xep
		printf("\n");
		for (k=0;k<n;k++) {printf("%d ",A[k]);}
		step++; //chuan bi cho buoc sap xep tiep theo
	}
}	

int main()
{
	int A[100],n,i,choice;
	printf("\nNhap so phan tu:"); scanf("%d",&n);
	for (i=0;i<n;i++)
	{   printf("\nA[%d]= ",i+1); scanf("%d",&A[i]);	}
	printf("Ban muon sap xep theo thu tu giam dan hay tang dan?\n"); 
	printf("Nhap vao so 1 neu ban chon tang dan, ");
	printf("nhap vao so 2 neu ban chon giam dan\n> "); 
	scanf("%d",&choice);
	if (choice == 1) {
		selectionSort_tangdan(A,n);
		inMang(A,n);
	}
	else if (choice == 2) {
		selectionSort_giamdan(A,n);
		inMang(A,n);
	}
	return 0;
}
