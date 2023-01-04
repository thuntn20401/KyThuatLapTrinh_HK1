//chuong 2, bai 5

#include<iostream>
#define SIZE 100
using namespace std;
void chuyen1ChieuSang2Chieu(int A[], int m, int n, int B[][SIZE]);
void nhap(int A[], int &m, int &n);
void xuat(int A[][SIZE], int m , int n);
int main()
{
	int A[SIZE];
	int B[SIZE][SIZE];
	int m,n;
	nhap(A,m,n);
	chuyen1ChieuSang2Chieu(A,m,n,B);
	xuat(B,m,n);
	return 0;
}
void chuyen1ChieuSang2Chieu(int A[], int m, int n, int B[][SIZE])
{
	int k = 0;
	for(int i = 0; i<m; i++)
		for(int j = 0; j<n; j++)
			B[i][j] = A[k++];
}
void nhap(int A[], int &m, int &n)
{
	cin>>m>>n;
	for(int i = 0; i<m*n;i++)
		cin>>A[i];
}
void xuat(int A[][SIZE], int m , int n)
{
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}