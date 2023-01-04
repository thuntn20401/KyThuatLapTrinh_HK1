#include <stdio.h>
int A[13] = {-2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2};
int B[13] = {0, -1, 0, 1, -2, -1, 0, 1, 2, -1, 0, 1, 0};
int khuVucQuanSat (int m, int n, int X, int M[], int N[]);
void main ()
{
	int m, n, X;
	int M[200], N[200];
	scanf ("%d %d %d", &m, &n, &X);
	for (int i=0; i<X; i++)
		scanf ("%d %d", &M[i], &N[i]);
	int d = khuVucQuanSat (m, n, X, M, N);
	printf ("%d", d);
	
}/*
int khuVucQuanSat (int m, int n, int X, int M[], int N[])

{
	int i, j;
	int MN[200][200] = {0};
	int d=0;
	for (i=0; i<X; i++)
		for (j =0; j<13; j++)
			if (M[i]+A[j]>=0 && M[i]+A[j]<m && N[i]+B[j]>=0 && N[i]+B[j]<n)
				MN[M[i]+A[j]][N[i]+B[j]] = 1;
	for (i=0; i<m; i++)
		for (j =0; j<n; j++)
			if (MN[i][j] == 1)
				d++;
			return d;	
}*/
int khuVucQuanSat (int m, int n, int X, int M[], int N[])
{
	int i, j;
	int MN[200][200] = {0};
	int d=0;
	for (i=0; i<X; i++)
		for (j =0; j<13; j++)
		{
			int x = M[i]+A[j];
			int y = N[i]+B[j];
			if (x>=0 && x<m && y>=0 && y<n)
				MN[x][y] = 1;
		}
	for (i=0; i<m; i++)
		for (j =0; j<n; j++)
			if (MN[i][j] == 1)
				d++;
			return d;
				
	
}