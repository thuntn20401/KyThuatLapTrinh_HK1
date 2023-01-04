#include <stdio.h>
void nhap (int &n, int &x);
void xuat (double kq);
double tinhS (int x, int n);

void main ()
{
	int x, n;
	nhap (x, n);
	double kq = tinhS (x, n);
	xuat (kq);
}
void nhap (int &x, int &n)
{
	scanf ("%d%d", &x, &n);
}
void xuat (double kq)
{
	printf ("%.2lf", kq);
}
double tinhS (int x, int n)
{
	double kq = 1;
	double s = 1;
	for (int i=1; i<=n; i++)
	{
		s = (-1)*s*(double)x/i;
		kq = kq + s;
	}
	return kq;
}