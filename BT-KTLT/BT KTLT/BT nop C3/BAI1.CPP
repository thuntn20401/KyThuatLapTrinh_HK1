#include <stdio.h>
#include <math.h>
void nhap (int &x);
void xuat (unsigned long kq);
unsigned long luythua(int x, int p);
void main ()
{
	int x, p;
	nhap (x);
	nhap (p);
	unsigned long kq = luythua (x, p);
	xuat (kq);
}
void nhap (int &x)
{
	scanf ("%d", &x);
}
void xuat (unsigned long kq)
{
	printf ("%ld", kq);
}

unsigned long luythua(int x, int p)
{
	unsigned long lt =1;

	for(int i=1;i<=p;i++)
		lt = lt*x;

	return lt;
}
/*
unsigned long luythua(int x, int p)
{
	unsigned long lt;
	lt = pow(x, p);
	return lt;
}
*/