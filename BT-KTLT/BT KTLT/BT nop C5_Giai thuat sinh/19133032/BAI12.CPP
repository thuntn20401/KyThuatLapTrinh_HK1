#include <stdio.h>
#define SIZE 50
void nhap (int &n);
void xuat (int A[], int n);
void swap (int &x, int &y);
void sinhHoanVi (int n);
void main ()
{
	int n;
	nhap (n);
	sinhHoanVi (n);
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
void swap (int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void sinhHoanVi (int n)
{
	int A[SIZE];
	for (int i=0; i<n; i++)
		A[i]=i;
	do 
	{
		xuat (A, n);
		i = n-2;
		while (i>=0 && A[i] > A[i+1])
			i--;
		if (i>=0)
		{
			int k = n-1;
			while (A[k] < A[i])
				k--;
			swap (A[k], A[i]);
			int x = i+1;
			int y = n-1;
			while (x < y)
			{
				swap (A[x], A[y]);
				x++;
				y--;
			}
		}
	}
	while (i>=0);
}
