#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien {
	int MSSV;
	char ho[20];
	char dem[20];
	char ten[20];
	char hoten[100];
	double diem;
} danhsach[100];

void indanhsach(int k, struct sinhvien* danhsach) {
	int i;
	printf(" STT   MSSV           		   Ho va ten             Diem\n");
	for (i = 0; i < k; i++) {
		printf("%3d %10d %30s %15.2f \n",i+1, danhsach[i].MSSV, danhsach[i].hoten, danhsach[i].diem);
	}

}

void sapxepMSSVaz(struct sinhvien* sinhvien, int n) {
	int j, i;

	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (sinhvien[j].MSSV > sinhvien[j + 1].MSSV) {
				struct sinhvien temp = sinhvien[j];
				sinhvien[j] = sinhvien[j + 1];
				sinhvien[j + 1] = temp;
			}
		}
	}
}
void sapxepMSSVza(struct sinhvien* sinhvien, int n) {
	int j, i;

	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (sinhvien[j].MSSV > sinhvien[j + 1].MSSV) {
				struct sinhvien temp = sinhvien[j];
				sinhvien[j] = sinhvien[j + 1];
				sinhvien[j + 1] = temp;
			}
		}
	}
}

void sapxeptenaz(struct sinhvien* sinhvien, int n) {
	int j, i;
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (strcmp(sinhvien[i].ten, sinhvien[j].ten) > 0) {
				struct sinhvien temp = sinhvien[i];
				sinhvien[i] = sinhvien[j];
				sinhvien[j] = temp;
			}
		}
	}
}
void sapxeptenza(struct sinhvien* sinhvien, int n) {
	int j, i;
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (strcmp(sinhvien[i].ten, sinhvien[j].ten) < 0) {
				struct sinhvien temp = sinhvien[i];
				sinhvien[i] = sinhvien[j];
				sinhvien[j] = temp;
			}
		}
	}
}
void sapxephoaz(struct sinhvien* sinhvien, int n) {
	int j, i;
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (strcmp(sinhvien[i].ho, sinhvien[j].ho) > 0) {
				struct sinhvien temp = sinhvien[i];
				sinhvien[i] = sinhvien[j];
				sinhvien[j] = temp;
			}
		}
	}
}
void sapxephoza(struct sinhvien* sinhvien, int n) {
	int j, i;
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (strcmp(sinhvien[i].ho, sinhvien[j].ho) < 0) {
				struct sinhvien temp = sinhvien[i];
				sinhvien[i] = sinhvien[j];
				sinhvien[j] = temp;
			}
		}
	}
}
void sapxepdiemaz(struct sinhvien* sinhvien, int n) {
	int j, i;
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (sinhvien[j].diem > sinhvien[j + 1].diem) {
				struct sinhvien temp = sinhvien[j];
				sinhvien[j] = sinhvien[j + 1];
				sinhvien[j + 1] = temp;
			}
		}
	}
}
void sapxepdiemza(struct sinhvien* sinhvien, int n) {
	int j, i;
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (sinhvien[j].diem < sinhvien[j + 1].diem) {
				struct sinhvien temp = sinhvien[j];
				sinhvien[j] = sinhvien[j + 1];
				sinhvien[j + 1] = temp;
			}
		}
	}
}
void timMSSV(struct sinhvien* a, int MSSV, int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i].MSSV == MSSV) {
			printf("%3d %10d %30s %15.2f \n",i+1, danhsach[i].MSSV, danhsach[i].hoten, danhsach[i].diem);
		}
	}
}
// strncmp: so sanh 2 chuoi khong phan biet chu hoa va chu thuong
void timten(struct sinhvien* a, char ten[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (strncmp(ten, a[i].ten,10) == 0) {
		printf("%3d %10d %30s %15.2f \n",i+1, danhsach[i].MSSV, danhsach[i].hoten, danhsach[i].diem);
		}
	}
}
void timho(struct sinhvien* a, char ho[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (strncmp(ho, a[i].ho,10) == 0) {
			printf("%3d %10d %30s %15.2f \n",i+1, danhsach[i].MSSV, danhsach[i].hoten, danhsach[i].diem);
		}
	}
}
void timdiem(struct sinhvien* a, double diem, int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i].diem == diem) {
			printf("%3d %10d %30s %15.2f \n",i+1, danhsach[i].MSSV, danhsach[i].hoten, danhsach[i].diem);
		}
	}
}

int main() {
	int i,j,h,n1,n2,n3; 
	int checkR = 1;// kiem tra dung.
	FILE *read;// doc file
	FILE *write;// sua file
	int iR = 0;
	read = fopen("data.txt", "r");
	if (read == NULL) {
		perror("khong co file\n");// in loi.
		return 1;
	}

	else {
		while (checkR) {
			fscanf(read, "%d %s %s %s %lf", &danhsach[iR].MSSV, &danhsach[iR].ho, &danhsach[iR].dem,&danhsach[iR].ten, &danhsach[iR].diem);
			fflush(stdin);
			n1 = strlen(danhsach[iR].ho);
   			n2 = strlen(danhsach[iR].dem);
   			n3 = strlen(danhsach[iR].ten);
   			for (i=0;i<n1;i++) danhsach[iR].hoten[i]=danhsach[iR].ho[i];
   			danhsach[iR].hoten[i] = ' ';
   			j=0;
			for (i=n1+1;i<n1+n2+1;i++) 
			{danhsach[iR].hoten[i]=danhsach[iR].dem[j];
			j++;
			}
   			danhsach[iR].hoten[i] = ' ';
   			j=0;
   			for (i=n1+n2+2;i<n1+n2+n3+2;i++) 
			{danhsach[iR].hoten[i]=danhsach[iR].ten[j];
			j++;
			}
   			danhsach[iR].hoten[i] = '\0';
			if (danhsach[iR].MSSV == 0)
				checkR = 0;
			iR++;
		}
	}
	fclose(read);

	int k = iR - 1;// k la so sinh vien trong danh sach
	indanhsach(k, danhsach);

	while (1) {
		int i = 0;
		printf("\nMenu:");
		int iA = 0;
		printf("\n1.In danh sach");
		printf("\n2.Xep bang MSSV");
		printf("\n3.Xep theo ten");
		printf("\n4.Xep theo ho");
		printf("\n5.Xep theo diem");
		printf("\n6.Tim kiem");
		printf("\n7.Ket thuc");
		printf("\nChon tu 1 den 7 : ");
		if (scanf("%d", &i) <= 0) {
			printf("Chon tu 1 den 4");
			exit(0);
		} else {
			int luachon = 0;
			double searchInt;	// tim theo ki tu so
			char searchString[20];	// tim theo ki tu chu
			int tempMSSV;
			double tempdiem;	//case 2
			char tempten[20], tempho[20];	// case 2

			switch (i) {
			case 1:
				system("clear");
				indanhsach(k, danhsach);
				printf("Size: %d \n", k);

				break;


			case 2:
				system("clear");
				printf("\nSap xep theo MSSV:\n");
				printf(" \n1. Sap xep tu thap den cao");
				printf(" \n2. Sap xep tu cao den thap");
				printf(" \nChon 1 hoac 2:"); scanf("%d",&h);
				if (h==1){
				sapxepMSSVaz(danhsach, k);
				indanhsach(k, danhsach);}
				if (h==2){
				sapxepMSSVza(danhsach, k);
				indanhsach(k, danhsach);
				}
				break;

			case 3:
				system("clear");
				printf(" \nSap xep theo ten:");
				printf(" \n1. Sap xep A -> Z");
				printf(" \n2. Sap xep Z -> A");
				printf(" \nChon 1 hoac 2:"); scanf("%d",&h);
				if (h==1){
				sapxeptenaz(danhsach, k);
				indanhsach(k, danhsach);}
				if (h==2){
				sapxeptenza(danhsach, k);
				indanhsach(k, danhsach);
				}
				break;
			case 4:
				system("clear");
				printf("\nSap xep theo ho:\n");
				printf(" \n1. Sap xep A -> Z");
				printf(" \n2. Sap xep Z -> A");
				printf(" \nChon 1 hoac 2:"); scanf("%d",&h);
				if (h==1){
				sapxephoaz(danhsach, k);
				indanhsach(k, danhsach);}
				if (h==2){
				sapxephoza(danhsach, k);
				indanhsach(k, danhsach);
				}
				break;
			case 5:
				system("clear");
				printf("\nSap xep theo diem:\n");
				printf(" \n1. Sap xep tu thap den cao");
				printf(" \n2. Sap xep tu cao den thap");
				printf(" \nChon 1 hoac 2:"); scanf("%d",&h);
				if (h==1){
				sapxepdiemaz(danhsach, k);
				indanhsach(k, danhsach);}
				if (h==2){
				sapxepdiemza(danhsach, k);
				indanhsach(k, danhsach);
				}
				break;

			case 6:
				system("clear");
				printf("\n1.Tim kiem MSSV:");
				printf("\n2.Tim kiem ten:");
				printf("\n3.Tim kiem ho:");
				printf("\n4.Tim kiem diem thi:");
				printf("\nChon tu 1 den 4:");
				scanf("%d", &luachon);

				if (luachon > 0 && luachon <= 4) {

					switch (luachon) {
					case 1:
						system("clear");
						printf("\nNhap MSSV ");
						scanf("%lf", &searchInt);
						int temp = (int) searchInt;
						timMSSV(danhsach, temp, k);
						break;

					case 2:
						system("clear");
						printf("\nNhap ten sinh vien ");
						scanf("%s", searchString);
						timten(danhsach, searchString, k);
						break;

					case 3:
						system("clear");
						printf("\nNhap ho sinh vien: \n");
						scanf("%s", searchString);
						timho(danhsach, searchString, k);
						break;

					case 4:
						system("clear");
						printf(" \nNhap diem sinh vien:");
						scanf("%lf", &searchInt);
						timdiem(danhsach, searchInt, k);
						break;

					}
				} else {
					printf("\nChon tu 1 den 4");
				}
			
				break;

			case 7:
				system("clear");
					for (i = 0; i < k; i++) {
						printf("%3d %10d %30s %15.2f \n",i+1, danhsach[i].MSSV, danhsach[i].hoten, danhsach[i].diem);
					}
				exit (0);
			default:
				printf("Chi nhap tu 1 den 7\n");
			}
		}
	}

	return 0;
}
