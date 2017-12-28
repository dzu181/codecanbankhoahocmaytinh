#include <stdio.h>
#include <curses.h>

int count=0;
//dichuyen cac dia tu cot A den cot C
void dichuyen(int n, char A, char B, char C) {
	if(n==1)	{
		count++;
		printf("Buoc thu %d: %c -> %c\n",count,A,C);	}
	else	{
		dichuyen(n-1,A,C,B);
		dichuyen(1,A,B,C);
		dichuyen(n-1,B,A,C);	}
}

int main()
{
	int disk;
	printf("So dia: "); scanf("%d", &disk);
	dichuyen(disk,'A','B','C');
	printf("So buoc can chuyen la: %d lan.", count);
	printf("\n");
	return 0;
}
