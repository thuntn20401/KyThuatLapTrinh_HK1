#include <stdio.h>
void nhapMang (int A[][100], int &m, int &n);
void xuatMang (int A[][100], int m, int n);
void xuat (int a);
void timMaxDongMinCot (int A[][100], int m, int n);
int timMaxDong (int A[][100], int m, int n);
int timMinCot (int A[][100], int m, int n);
void main ()
{
	int A[100][100];
	int m, n;
	nhapMang (A, m, n);
	xuatMang (A, m, n);
	timMaxDongMinCot (A, m, n);
}
void nhapMang (int A[][100], int &m, int &n)
{
	scanf ("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
void xuatMang (int A[][100], int m, int n)
{
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			printf ("%d ", A[i][j]);
		printf ("\n");
	}
}
void timMaxDongMinCot (int A[][100], int m, int n)
{
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			if (A[i][j]==timMaxDong(A,i,m) && A[i][j] == timMinCot(A,n,j))
				xuat (A[i][j]);
	}
}
int timMaxDong (int A[][100], int m, int n)
{
	int max = A[m][0];
	for (int j=1; j<n; j++)
		if (A[m][j]>max)
			max = A[m][j];
		return max;
}
int timMinCot (int A[][100], int m, int n)
{
	int min = A[0][n];
	for (int i=1; i<m; i++)
		if (A[i][n]<min)
			min = A[i][n];
		return min;
}
void xuat (int a)
{
	printf ("%d", a);
}