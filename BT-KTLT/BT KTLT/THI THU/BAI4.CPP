#include <stdio.h>
#define SIZE 100

void nhapMang (int A[][SIZE], int &m, int &n);
int laDiemLoi (int A[][SIZE], int i, int j);
void viTriDiemLoiNhoNhat (int A[][SIZE], int m, int n);

void main ()
{
	int A[SIZE][SIZE]={0};
	int m, n;
	nhapMang (A, m, n);
	viTriDiemLoiNhoNhat (A, m, n);
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

void vitriDiemLoiNhoNhat (int A[][SIZE], int m, int n)
{
	int min;
	for (int i=0; i<m; i++)
	{
		for (int j =0; j<m; j++)
			if (laDiemLoi(A, i, j))
				min = A[i][j];
			if (A[i][j] < min && laDiemLoi(A, i, j))
				printf ("%d %d", i, j);
		

	}
}
