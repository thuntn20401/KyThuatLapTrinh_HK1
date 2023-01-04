#include <stdio.h>
#define SIZE 50

void nhap (int &n);
void lietKeToHop (int n);
int getBit (int n, int k);

void main ()
{
	int  n;
	nhap (n);
	lietKeToHop (n);
}

void nhap (int &n)
{
	scanf ("%d", &n);
}

void lietKeToHop (int n)
{
	int A[SIZE];
	for (int i=0; i<n; i++)
		A[i] = i;

		int end = 1 << n;
	
		for (i=1; i<end; i++)
		{
			for (int j=0; j<n; j++)
				if (getBit (i, j) == 1)
					printf ("%d ", A[j]);
				printf ("\n");
		}	
}

int getBit (int n, int k)
{
	return (n >> k) & 1;
}
