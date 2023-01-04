#include <stdio.h>
void nhapMang (int A[][100], int &m, int &n);
int la_diem_loi (int A[][100], int i, int j);
int diem_loi_nho_nhat (int A[][100], int m, int n);
void vi_tri_diem_loi_nho_nhat (int A[][100], int m, int n);
int tim_min (int A[], int n);

void main ()
{
	int A[100][100]={0}, m, n;
	nhapMang (A, m, n);
	vi_tri_diem_loi_nho_nhat (A, m, n);

}
void nhapMang (int A[][100], int &m, int &n)
{
	scanf ("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf ("%d", &A[i][j]);
}
void vi_tri_diem_loi_nho_nhat (int A[][100], int m, int n)
{
	int Xmin = diem_loi_nho_nhat(A, m, n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if (Xmin==A[i][j] && la_diem_loi(A, i, j))
				printf ("%d %d \n", i, j);
	
}
int la_diem_loi (int A[][100], int i, int j)
{
	int X[4]={0, 0, 1, -1};
	int Y[4]={-1, 1, 0, 0};
	for (int k=0; k<4; k++)
		if (A[i][j]<=A[i+X[k]][j+Y[k]])
			return 0;
		return 1;
}
int diem_loi_nho_nhat (int A[][100], int m, int n)
{
	int B[10000], nB=0;
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++)
			if (la_diem_loi(A, i, j))
				B[nB++] = A[i][j];
			int Xmin = tim_min (B, nB);
			return Xmin;
}
int tim_min (int A[], int n)
{
	int min = A[0];
	for (int i=1; i<n; i++)
		if (A[i] <min)
			min = A[i];
		return min;
}
