#include <stdio.h>
void nhap (int &n);
void xuat (int kq);
int giaiThua (int n);
void main ()
{
	int n;
	nhap (n);
	int kq= giaiThua (n);
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
int giaiThua (int n)
{
	if(n==0)
		return 1;
	return giaiThua (n-1) * n;
}