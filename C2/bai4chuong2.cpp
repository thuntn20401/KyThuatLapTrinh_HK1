//chuong 2. bai 4

#include<iostream>
#define SIZE 100
using namespace std;
void nhap(int A[][SIZE], int &m, int &n);
void xuat(int A[], int m , int n);
void chuyen2ChieuThanh1Chieu(int A[][SIZE], int m, int n, int B[]);
int main()
{
	int A[SIZE][SIZE];
	int B[2*SIZE];
	int m, n;
	nhap(A,m,n);
	chuyen2ChieuThanh1Chieu(A,m,n,B);
	xuat(B,m,n);
	return 0;
}
void chuyen2ChieuThanh1Chieu(int A[][SIZE], int m, int n, int B[])
{
	int k =0;
	for(int i = 0; i<m; i++)
		for(int j = 0; j<n; j++)
			B[k++] = A[i][j];
}
void nhap(int A[][SIZE], int &m, int &n)
{
	cin>>m>>n;
	for(int i =0; i<m; i++)
		for(int j = 0; j<n; j++)
			cin>>A[i][j];
}
void xuat(int A[], int m , int n)
{
	for(int i = 0; i<m*n; i++)
		cout<<A[i]<<" ";
}