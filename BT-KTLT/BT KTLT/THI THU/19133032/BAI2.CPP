#include <stdio.h>
#define SIZE 99

struct PhanSo 
{
	int tu; 
	int mau;
};

void nhapPhanSo (PhanSo &a);
void nhapMangPhanSo (PhanSo A[], int &n);
void xuatMax (PhanSo a);
int soSanhPhanSo (PhanSo a, PhanSo b);
PhanSo timMax (PhanSo A[], int n);

void main()
{
	int n;
	PhanSo A[SIZE], max;
	nhapMangPhanSo (A, n);
	max = timMax (A, n);
	xuatMax (max);
	
}	
void nhapPhanSo (PhanSo &a)
{
	scanf ("%d%d", &a.tu, &a.mau);
}

void nhapMangPhanSo (PhanSo A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		nhapPhanSo (A[i]);

}

void xuatMax (PhanSo a)
{
	printf ("%d %d", a.tu, a.mau);
}

int soSanhPhanSo (PhanSo a, PhanSo b)
{
	if (a.tu*b.mau == a.mau*b.tu)
		return 0;
	else
		if (a.tu*b.mau > a.mau*b.tu)
			return 1;
		return -1;
}

PhanSo timMax (PhanSo A[], int n)
{
	PhanSo max = A[0];
	for (int i=1; i<n; i++)
		if (soSanhPhanSo (A[i], max)==1)
			max = A[i];
		return max;
}