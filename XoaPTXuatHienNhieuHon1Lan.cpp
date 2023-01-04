#include<stdio.h>
void xoaViTriK(int A[], int &n, int k);
void xoaTrungNhau(int A[], int &n);
void nhap(int A[], int &n);
void xuat(int A[], int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	xoaTrungNhau(A,n);
	xuat(A,n);
	return 0;
}
void xoaViTriK(int A[], int &n, int k)
{
	for(int i = k; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}

void xoaTrungNhau(int A[], int &n)
{
	int i = 0;
	while(i<n)
	{
		int j=i+1;
		bool co = false;
		while(j<n)
			if(A[i] == A[j])
			{
				xoaViTriK(A,n,j);
				co = true;
			}
			else
				j++;
		if(co == true)
			xoaViTriK(A,n,i);
		else
			i++;
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
	for(int i = 0; i<n; i++)
		printf("%d ", A[i]);
}