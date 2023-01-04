#include <stdio.h>
int tongLonNhat (double A[], int n);
void xuat (double kq);
void nhap (double A[], int &n);
void main ()
{
	int n;
	double A[1000];
	nhap (A, n);
	double kq = tongLonNhat (A, n);
	xuat (kq);
}
void nhap (double A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%lf", &A[i]);
}
void xuat (double kq)
{
	printf ("%.2lf", kq);
}
double tongLonNhat (double A[], int n)
{
	double max = 0;
	double t =0;
	for (int i=0; i<n; i++)
	{
		t = t+A[i];
		if (t<0)
			t=0;
		if (t > max)
			max = t;
		
	}
	return max;

}