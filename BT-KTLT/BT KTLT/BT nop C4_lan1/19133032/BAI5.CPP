#include <stdio.h>
void nhap (int &k, int &n);
void xuat (int kq);
int C (int k, int n);
void main ()
{
	int k, n;
	nhap (k, n);
	int kq = C (k, n);
	xuat (kq);
}
void nhap (int &k, int &n)
{
	scanf ("%d%d", &k, &n);
}
void xuat (int kq)
{
	printf ("%d", kq);
}
int C (int k, int n)
{
	if (k == 0 || k == n) 
		return 1;
    if (k == 1 || k == n-1)
		return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

