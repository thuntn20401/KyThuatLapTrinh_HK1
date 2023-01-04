#include <stdio.h>
void nhap (int &n, int &x);
void xuat (float kq);
float tinhS (int x, int n);

void main ()
{
	int x, n;
	nhap (x, n);
	float kq = tinhS (x, n);
	xuat (kq);
}
void nhap (int &x, int &n)
{
	scanf ("%d%d", &x, &n);
}
void xuat (float kq)
{
	printf ("%.2f", kq);
}
float tinhS (int x, int n)
{
	float kq = (float)(-1)*x;
	float s = (float)(-1)*x;
	for (int i=1; i<=n; i++)
	{
		s = (-1)*s*(float)x/((i+2)/i);
		kq = kq + s;
	}
	return kq;
}