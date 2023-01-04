#include <stdio.h>
void nhap (int &n);
void xuat (int kq);
int tinhS (int n);
void main ()
{
	int n;
	nhap (n);
	int kq = tinh_S (n);
	xuat (kq);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (int kq)
{
	printf ("%d", kq);
}
int tinhS (int n)
{
	int S=0, t=1;
	for (int i=1; i<=n; i++)
	{
		t = t*i;
		S = S+t;
	}
	return S;
}