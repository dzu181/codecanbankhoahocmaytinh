#include<stdio.h>
#include<curses.h>
// cac bien toan cuc su dung trong chuong trinh
int moved = 1; //bien dem cac buoc
int n; //bien kich co day so

void doiCho(int a[],int *x,int *y)
{	//sap xep
	int temp=0,i;
	temp=*x;
	*x=*y;
	*y=temp;
	//in mang de thay su thay doi
	printf("\nMove %d: ",moved); moved += 1;
	for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	printf("\n");
}

int sapXepTang(int a[],int dau, int cuoi)
{
	int i,j,key;
	j=dau -1;// chon bien dem.
	key=a[cuoi];
	for(i=dau;i<cuoi;i++)
	{if(a[i]<=key)
	{
		j++;
		doiCho(a,&a[j],&a[i]);
	}
	}
	doiCho(a,&a[j+1],&a[cuoi]); 
	return j+1;
}

void quickSort_tang(int a[], int dau,int cuoi)
{if (dau<cuoi)
{
	int T = sapXepTang(a,dau,cuoi);
	quickSort_tang(a,dau,T-1);
	quickSort_tang(a,T+1,cuoi);
}
}

int sapXepGiam(int a[],int dau, int cuoi)
{
	int i,j,key;
	j=dau -1;
	key=a[cuoi];
	for(i=dau;i<cuoi;i++)
	{if(a[i]>=key)
	{
		j++;
		doiCho(a,&a[j],&a[i]);
	}
	}
	doiCho(a,&a[j+1],&a[cuoi]);
	return j+1;
}

void quickSort_giam(int a[], int dau,int cuoi)
{if (dau<cuoi)
{
	int T = sapXepGiam(a,dau,cuoi);
	quickSort_giam(a,dau,T-1);
	quickSort_giam(a,T+1,cuoi);
}
}

int main()
{
	int a[100],i;
	printf("Nhap so phan tu cua day so: ");scanf("%d",&n);
	printf("Nhap day so:");
	for(i=0;i<n;i++)
	{	
		printf("\nA[%d]= ",i+1);
		scanf("\t%d",&a[i]);
	}
	printf("\nDay so can sap xep la: ");
	for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	printf("\n\n");
	//sap xep tang
	quickSort_tang(a,0,n-1);
	printf("Day so da sap xep tang dan: ");
	for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	printf("\n");
	//dua bien dem cac buoc ve default
	moved = 1;
	//sap xep giam
	quickSort_giam(a,0,n-1);
	printf("Day so da sap xep giam dan: ");
	for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	printf("\n");
	return 0;
}
