#include <stdio.h>
void nhap (int &n);
void xuat (int kq);
int fibonaci_n (int n);
void main ()
{
	int n;
	nhap (n);
	int kq = fibonaci_n (n);
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
int fibonaci_n (int n)
{
	if (n==0 || n==1)
		return 1;
	return fibonaci_n(n-1) + fibonaci_n(n-2);
}