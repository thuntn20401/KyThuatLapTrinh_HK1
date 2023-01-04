#include <stdio.h>
#define SIZE 50
void nhap (int &n);
void xuat (int A[], int n);
void sinhTapCon (int n);
void main ()
{
	int n;
	nhap (n);
	printf ("rong\n");
	sinhTapCon (n);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (int A[], int n)
{
	for (int i=0; i<n; i++)
		printf ("%d ", A[i]);
	printf ("\n");
}
void sinhTapCon (int n)
{
	int A[SIZE] = {0};
	int k=1;
	xuat (A, k);
	while (A[0] < n-1)
	{
		while (A[k-1] < n-1)
		{
			A[k] = A[k-1]+1;
			k++;
			xuat (A, k);
		}
		if (k > 1)
		{
			k--;
			A[k-1]++;
			xuat (A, k);
		}
	}
}