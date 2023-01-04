#include <stdio.h>
#define SIZE 100
void xuatMang (int A[], int n);
void nhapMang (int A[][SIZE], int &m, int &n);
int laDiemLoi (int A[][SIZE], int i, int j);
int laDiemLoi (int A[][SIZE], int i, int j);
int diemLoiNhoNhat (int A[][SIZE], int m, int n);
int timMin (int A[], int n);
void viTriIDiemLoiNhoNhat (int A[][SIZE], int m, int n);
void viTriJDiemLoiNhoNhat (int A[][SIZE], int m, int n);
void xuat (int a);
void main ()
{
	int A[SIZE][SIZE]={0};
	int m, n;
	nhapMang (A, m, n);
	int vti = viTriIDiemLoiNhoNhat (A, m, n);
	int vtj = viTriJDiemLoiNhoNhat (A, m, n);
	xuat (vti);
	xuat (vtj);
}

void nhapMang (int A[][SIZE], int &m, int &n)
{
	scanf ("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}

int laDiemLoi (int A[][SIZE], int i, int j)
{
	int X[4] = {0, 0, 1, -1};
	int Y[4] = {-1, 1, 0, 0};
	for (int k=0; k<4; k++)
		if (A[i][j] <= A[i+X[k]][j+Y[k]])
			return 0;
		return 1;
}

int diemLoiNhoNhat (int A[][SIZE], int m, int n)
{
	int B[10000], nB =0;
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++)
			if (laDiemLoi(A, i, j))
				B[nB++] = A[i][j];
			int min = timMin (B, nB);
			return min;
}

int timMin (int A[], int n)
{
	int min = A[0];
	for (int i=1; i<n; i++)
		if (A[i] < min)
			if (A[i] < min)
				min = A[i];
			return min;
}

void viTriIDiemLoiNhoNhat (int A[][SIZE], int m, int n)
{
	int vti = 0;
	int min = diemLoiNhoNhat (A, m, n);
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			if (min == A[i][j] && laDiemLoi(A, i, j))
			{
				vti = i;
				break;
			}
	}
	return vti;
				
}

void viTriJDiemLoiNhoNhat (int A[][SIZE], int m, int n)
{
	vtj = 0;
	int min = diemLoiNhoNhat (A, m, n);
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			if (min == A[i][j] && laDiemLoi(A, i, j))
			{
				vtj = j;
				break;
			}
	}
	return vtj;
}
void xuat (int a)
{
	printf ("%d", a);
}