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
void viTriDiemLoiNhoNhat (int A[][SIZE], int m, int n)
{
	int vti=-1, vtj=-1;
	int min = 999999;
	for (int i=0; i<m; i++)
		for (int j =0; j<n; j++)
			if (laDiemLoi(A, i, j) && A[i][j] < min)
			{
				min = A[i][j];
				vti = i;
				vtj = j;
			}
	if (vti !=-1 && vtj !=-1)
		printf ("%d %d", vti, vtj);
	else
		printf ("%d", -1);	
}
