#include <stdio.h>
void nhap (int &x);
void nhapMang (int A[], int &n);
void xuat (int kq);
int timNhiPhan (int A[], int l, int r, int x);
void main ()
{
	int A[100], n;
	int x;
	nhap (x);
	nhapMang (A, n);
	int l = 0;
	int r = n-1;
	int kq = timNhiPhan (A, l, r, x);
	xuat (kq);
}
void nhap (int &x)
{
	printf ("Nhap x: ");
	scanf ("%d", &x);
}
void nhapMang (int A[], int &n)
{
	printf ("Nhap n: ");
	scanf ("%d", &n);
	printf ("Nhap mang n phan tu: ");
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
void xuat (int kq)
{
	
	printf ("Vi tri: %d", kq);
}
int timNhiPhan (int A[], int l, int r, int x)
{
	int m;
	while (l<=r)
	{
		m = (l+r)/2;
		if (A[m] == x)
			return m;
		if (A[m] > x) 
			return timNhiPhan (A, l, m-1,  x);
		return timNhiPhan (A, m+1, r, x);
	}
	return -1;
}
