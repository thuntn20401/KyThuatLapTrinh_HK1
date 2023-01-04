#include <stdio.h>
#include <math.h>
//
void nhap (int &n);
void xuat (double kq);
double eMUx (int x, int n);

//
void main ()
{
	int x, n;
	nhap (x);
	nhap (n);
	double kq = eMUx (x, n);
	xuat (kq);
}
//
void nhap (int &n)
{
	scanf ("%d", &n);
}
//
void xuat (double kq)
{
	printf ("%lf", kq);
}
//
double eMUx (int x, int n)
{
	double kq = 1;
	double s =1;
	for (int i=1; i<=n; i++)
	{
		s = s * (double)x/i;
		kq = kq + s;
	}
	return kq;
}
