#include <stdio.h> 
int bitcount (int n);
void nhap (int &n);
void xuat (int kq);
void main ()
{
	int n;
	nhap (n);
	int kq = bitcount (n);
	xuat (kq);
}
int bitcount (int n)
{
	int d=0;
	for (int i=0; i<32; i++)
	{
		if (n &1)
			d++;
		n>>=1;
	}
	return d;
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (int kq)
{
	printf ("%d", kq);
}