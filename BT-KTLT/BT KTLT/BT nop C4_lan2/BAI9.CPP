#include <stdio.h>
#include <math.h>
void nhap (int A[], int &n);
void xuat (int kq);
int uocChungLonNhat (int A[], int n);
int ucln (int a, int b);
void main ()
{
	int A[1000], n;
	nhap (A, n);
	int kq = uocChungLonNhat (A, n);
	xuat (kq);
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
void xuat (int kq)
{
	printf ("%d", kq);
}

int uocChungLonNhat (int A[], int n)
{
	int gcd;
	if (n==1)
		return A[0];
	else 
	{
		gcd = abs(A[0]);
			for (int i=1; i<n; i++)
				gcd = ucln (gcd, abs(A[i]));
	}
	return gcd;	
}
int ucln (int a, int b)
{
    if (b == 0) return a;
    return ucln(b, a % b);
}
