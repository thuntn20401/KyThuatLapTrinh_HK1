#include<stdio.h>

void ghepMang(int A[], int nA, int B[], int nB, int C[], int &nC);
void nhap(int A[], int &n);
void xuat(int A[], int n);
#define SIZE 100

int main()
{
	int A[SIZE], nA, B[SIZE], nB, C[2*SIZE], nC;
	nhap(A,nA);
	nhap(B,nB);
	ghepMang(A,nA, B,nB, C,nC);
	xuat(C,nC);
	return 0;
}
void ghepMang(int A[], int nA, int B[], int nB, int C[], int &nC)
{
	int iA = 0;
	int iB = 0;
	nC = 0;
	while (iA<nA && iB<nB)
	{
		C[nC++] = A[iA++];
		C[nC++] = B[iB++];
	}
	//mang B het truoc
	while (iA<nA)
	{
		C[nC++] = A[iA++];
	}
	while(iB<nB)
	{
		C[nC++] = B[iB++];
	}
}

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for(int i = 0; i<n; i++)
		scanf("%d", &A[i]);
}

void xuat(int A[], int n)
{
	for(int i= 0; i<n;i++)
		printf("%d ", A[i]);
}