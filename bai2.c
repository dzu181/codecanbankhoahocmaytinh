#include <stdio.h>
#include <curses.h>
#include <math.h>
int main()
{	
	int A[100][100],i,j,hang,cot,x,found=0;
	// tao ma tran
	printf("Nhap so hang: ");scanf("%d",&hang);
	printf("\nNhap so cot: ");scanf("%d",&cot); printf("\n");
	for (i=0;i<cot;i++) {
		for (j=0;j<hang;j++) {
		printf("A[%d,%d]= ", j+1, i+1); scanf("%d",&A[j][i]); printf("\n"); }
	}

	// in ma tran
	printf("In ma tran:\n");
	for (j=0;j<hang;j++) {
		printf("\n");
		for (i=0;i<cot;i++) {
			printf("%d ",A[j][i]);
			 }
	}

	//Tim so
	printf("\n");
	printf("So can tim: "); scanf("%d",&x);
	for (i=0;i<cot;i++)
	{
		for (j=0;j<hang;j++)
		{
			if (A[j][i]==x) {
				found+=1;
			}
		}
	}
	if (found>0)
	{
		printf("\nSo phan tu bang x la: %d", found);
		printf("\nCac vi tri bang x la: ");
		for (i=0;i<cot;i++)
		{
			for (j=0;j<hang;j++) {
				if (A[j][i]==x) {printf("A[%d,%d]; ", j+1, i+1);}
			}
		}
	}
	printf("\n");
	return 0;
}
