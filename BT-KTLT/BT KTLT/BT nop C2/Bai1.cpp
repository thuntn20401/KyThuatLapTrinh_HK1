#include <stdio.h>
void nhap (int &x);
void nhapMang (int A[], int &n);
void xuat (int kq);
int timKiem (int A[], int n, int x);
void main()
{
	int A[100];
	int n;
	int x;
	nhap (x);
	nhapMang (A,n);
	int kq = timKiem (A,n,x);
	xuat (kq);
}
void nhap (int &x)
{
	printf ("Nhap x: ");
	scanf ("%d", &x);
}
void nhapMang (int A[], int &n)
{
	printf ("Nhap n phan tu: ");
	scanf("%d", &n);
	printf ("Nhap mang: ");
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void xuat (int kq)
{
	if (kq == -1)
		printf ("khong tim thay x");
	else
		printf ("vi tri cua x: %d", kq);
		printf ("\n");
}
int timKiem (int A[], int n, int x)
{
	int vt;
	A[n] = x;
	for (int i=0; i<=n; i++)
	{
		if (A[i] == x)
		break;
	}
	if (i == n)
		vt = -1;
	else
		vt = i;
	return vt;
}