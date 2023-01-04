#include <stdio.h>
#include <math.h>
void nhap (int A[], int &n);
void xuat (int kq);
int kiemTraSNT (int n);
void tachMang (int A[], int nA, int B[], int &nB);
int timMin (int B[], int n);
void main ()
{
	int A[1000], nA;
	nhap (A, nA);
	int B[1000], nB;
	tachMang (A, nA, B, nB);
	int kq = timMin (B, nB);
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
int kiemTraSNT (int n)
{
	if (n<2) 
		return 0;
	else 
		if (n==2)
			return 1;
		else
			if (n%2==0)
				return 0;
			else
			{
				for (int i=3; i<sqrt(n); i++)
					if (n%i==0) 
						return 0;
					return 1;
			}
}
void tachMang (int A[], int nA, int B[], int &nB)
{
	nB=0;
	for (int i=0; i<nA; i++)
		if (kiemTraSNT(A[i])) 
		{
			B[nB] = A[i];
			nB++;
		}
	
}
int timMin (int B[], int n)
{
	if (n==0)
		return -1;
	if (n==1)
		return B[0];
    if (B[n-1] < timMin(B,n-1))
		return B[n-1];
    return timMin(B,n-1);
}