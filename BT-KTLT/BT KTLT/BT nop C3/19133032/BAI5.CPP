#include <stdio.h>
void nhap (int &n);
void xuat (double kq);
double tinhS (int n);
int giaiThua (int n);
void main ()
{
	int n;
	nhap (n);
	double kq = tinhS (n);
	xuat (kq);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (double kq)
{
	printf ("%lf", kq);
}
double tinhS (int n)
{
	double S = 0;
	for (int i=1; i<=n; i++)
	{	
		int gt = giaiThua (i);
		S = S + ((double) 1/ gt);
	}
	return S;
}
int giaiThua (int n)
{
	int gt = 1;
	for (int i= 1; i<=n; i++)
		gt = gt*i;
	return gt;

}