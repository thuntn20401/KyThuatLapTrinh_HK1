#include <stdio.h>
#define SIZE 50
void nhap (int &n);
int sinhNhiPhan (int A[], int n);
void sinhNhiPhanDoDaiN (int n);
void xuat (int A[], int n);
void main ()
{
	int n;
	nhap (n);
	sinhNhiPhanDoDaiN (n);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int sinhNhiPhan (int A[], int n)
{
	for (int i=n-1; i>=0; i--)
		if (A[i] ==1)
			A[i]=0;
		else
		{
			A[i]=1;
			return 1;
		}
	return 0;
}
void sinhNhiPhanDoDaiN (int n)
{
	int A[SIZE] = {0};
	int flag;
	do 
	{
		xuat (A, n);
		flag = sinhNhiPhan(A, n);
	}
	while (flag ==1);
}
void xuat (int A[], int n)
{
	for (int i=0; i<n; i++)
		printf ("%d", A[i]);
	printf ("\n");
}