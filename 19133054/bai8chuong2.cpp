//chuong 2 bai 8 tim diem loi nho nhat
#include<iostream>
#define SIZE 100
using namespace std;
void xuatMang(int A[][SIZE], int m, int n);
void nhapMang(int A[][SIZE], int &m, int &n);
int demDiemLoi(int A[][SIZE], int m, int n);
int laDiemLoi(int A[][SIZE], int i, int j);
void xuat(int x);
int timMin(int A[], int n);
int timGiaTriMinLoi(int A[][SIZE], int m, int n);
int timViTriMin(int A[], int n);
int timViTriDiemLoiNhoNhat(int A[][SIZE], int m, int n, int D[], int C[]);
int main()
{
	int A[SIZE][SIZE] = {0};
	int m, n;
	int D[10000];
	int C[10000];
	nhapMang(A,m,n);
	xuatMang(A,m,n);
	//int kq = demDiemLoi(A,m,n);
	//int kq = timGiaTriMinLoi(A,m,n);
	int vitri = timViTriDiemLoiNhoNhat(A,m,n,D,C);
	xuat(D[vitri]-1);
	xuat(C[vitri]-1);
	return 0;
}
int timViTriDiemLoiNhoNhat(int A[][SIZE], int m, int n, int D[], int C[])
{
	int B[SIZE*SIZE], nB=0;
	for(int i = 1; i<=m; i++)
		for(int j = 0; j<=n; j++)
			if(laDiemLoi(A,i,j))
			{
				B[nB] = A[i][j];
				D[nB] = i;
				C[nB] = j;
				nB++;
			}
				
	int vitri = timViTriMin(B,nB);
	return vitri;
}
int timViTriMin(int A[], int n)
{
	int min = A[0];
	int vitri = 0;
	for(int i = 0;i<n;i++)
		if(A[i]<min)
		{
			min = A[i];
			vitri = i;
		}
	return vitri;
}
int timGiaTriMinLoi(int A[][SIZE], int m, int n)
{
	int B[SIZE*SIZE], nB=0;
	for(int i = 1; i<=m; i++)
		for(int j = 0; j<=n; j++)
			if(laDiemLoi(A,i,j))
				B[nB++] = A[i][j];
	int min = timMin(B,nB);
	return min;
}
int timMin(int A[], int n)
{
	int min = A[0];
	for(int i = 0;i<n;i++)
		if(A[i]<min)
			min = A[i];
	return min;
}

int demDiemLoi(int A[][SIZE], int m, int n)
{
	int dem = 0;
	for(int i = 1; i<=m; i++)
		for(int j = 0; j<=n; j++)
			if(laDiemLoi(A,i,j))
				dem++;
	return dem;
}

int laDiemLoi(int A[][SIZE], int i, int j)
{
	int X[4]={0,0,1,-1};
	int Y[4] = {-1,1,0,0};
	for(int k = 0; k<4; k++)
		if(A[i][j] <= A[i+X[k]][j+Y[k]])
			return 0;
	return 1;
}

void xuat(int x)
{
	cout<<x<<" ";
}

void nhapMang(int A[][SIZE], int &m, int &n)
{
	cin>>m>>n;
	for(int i = 1; i<=m; i++)
		for(int j = 1; j<=n; j++)
			cin>>A[i][j];
}
void xuatMang(int A[][SIZE], int m, int n)
{
	for(int i = 0; i<m+2; i++)
	{
		for(int j = 0; j<n+2; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}