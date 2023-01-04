//liet ke tan suat xuat hien gia tri trong mang

#include<stdio.h>

int demSoLanXuatHien(int A[], int n, int x);
bool timThay(int A[], int n, int x);
void lietKeTanSuat(int A[], int nA, int B[], int C[], int &nB);
void nhap(int A[], int &n);
void xuat(int B[],int C[], int n);

int main()
{
	int A[100],B[100],C[100],nB;
	int nA;
	nhap(A,nA);
	lietKeTanSuat(A,nA,B,C,nB);
	xuat(B,C,nB);
	return 0;
	
}
int demSoLanXuatHien(int A[], int n, int x)
{
	int dem = 0;
	for(int i = 0; i<n;i++)
		if(A[i] == x)
			dem++;
	return dem;
}

bool timThay(int A[], int n, int x)
{
	for(int i = 0; i<n; i++)
		if(A[i] ==x)
			return true;
	return false;
}


void lietKeTanSuat(int A[], int nA, int B[], int C[], int &nB)
{
	nB = 0;
	for(int i = 0; i<nA; i++)
		if(timThay(B,nB,A[i]) == false)
			B[nB++] = A[i];
	for (int i = 0; i<nB; i++)
		C[i] = demSoLanXuatHien(A,nA,B[i]);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%d", &A[i]);
}
void xuat(int B[],int C[], int n)
{
	for(int i = 0; i<n;i++)
		printf("%d ", B[i], " xuat hien " , " %d", C[i], " lan");
}