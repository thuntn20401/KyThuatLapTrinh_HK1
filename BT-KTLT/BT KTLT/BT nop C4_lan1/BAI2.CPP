#include <stdio.h>
void nhap (int A[], int &n);
void xuat (int kq);
int tong (int A[], int n);
void main ()
{
	int A[100], n;
	nhap (A, n);
	int kq = tong (A, n);
	xuat (kq); 
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
void xuat (int kq)
{
	printf ("%d", kq);
} 
int tong (int A[], int n)
{
	if (n==0)
		return 0;
	if (n==1)
		return A[0];
	return tong (A, n-1)+ A[n-1];
}
