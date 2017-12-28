#include <stdio.h>
#include <curses.h>
#include <math.h>

void bubbleSort_tangdan(int mang[], int n)
{
   int i, j, k, a=1, temp = 0;
   for (i = 0; i < n-1; i++)   {     
       for (j=n-1;j>i;j--) {
           if (mang[j] < mang[j-1]) {
           		temp = mang[j];
				      mang[j] = mang[j-1];
              mang[j-1] = temp;
           }
           //trinh dien chieu thuc
           printf("\nBuoc %d: ",a);
           for (k=0;k<n;k++) {
           		printf("%d ",mang[k]);
           }
           a++; //Buoc tiep theo cua chieu thuc
       }
}
}

void bubbleSort_giamdan(int mang[], int n)
{
   int i, j, k, a=1, temp = 0;
   for (i = 0; i < n-1; i++)   {     
       for (j=n-1;j>i;j--) {
           if (mang[j] > mang[j-1]) {
           		temp = mang[j];
				      mang[j] = mang[j-1];
				      mang[j-1] = temp;
           }
           //trinh dien chieu thuc
           printf("\nBuoc %d: ",a);
           for (k=0;k<n;k++) {
           		printf("%d ",mang[k]);
           }
           a++; //Buoc tiep theo cua chieu thuc
       }
}
}

void inMang (int mang[], int size)
{
    int i;
    printf("\nDay so da sap xep la: ");
    for (i=0; i < size; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int main() {
	int i, n, choice; 
	printf("Xin ban hay nhap so phan tu cua day so:\n"); scanf("%d",&n);
  int mang[n];
	for (i=0;i<n;i++)
	{
		printf("\nA[%d]= ",i+1); scanf("%d",&mang[i]);	
	}
	printf("Ban muon sap xep theo thu tu giam dan hay tang dan?\n"); 
	printf("Nhap vao so 1 neu ban chon tang dan, ");
	printf("nhap vao so 2 neu ban chon giam dan\n> "); 
	scanf("%d",&choice);
	if (choice == 1) {
		bubbleSort_tangdan(mang,n);
		inMang(mang,n);
	}
	else if (choice == 2) {
		bubbleSort_giamdan(mang,n);
		inMang(mang,n);
	}
	return 0;
}