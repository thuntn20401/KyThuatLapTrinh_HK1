#include <stdio.h>
void nhap (int A[], int &n);
void xuat (int kq);
int phan_tu_xuat_hien_nhieu_nhat (int A[], int n);
int dem_so_lan_xuat_hien (int A[], int n, int x);
void main ()
{
	int A[1000], n;
	nhap (A, n);
	int kq = phan_tu_xuat_hien_nhieu_nhat (A, n);
	xuat (kq);
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
void xuat (int kq)
{
	printf ("%d", kq);
}

int dem_so_lan_xuat_hien (int A[], int n, int x)
{
	int d = 0;
	for (int i=0; i<n; i++)
		if (A[i] == x)
			d++;
		return d;
}
int phan_tu_xuat_hien_nhieu_nhat (int A[], int n)
{
	int pt=A[0];
	int d = dem_so_lan_xuat_hien(A, n, A[0]);
		for (int i=1; i<n; i++)
		{
			int d1 = dem_so_lan_xuat_hien(A, n, A[i]);
				if (d < d1)
				{
					d = d1;
					pt = A[i];
				}
		}
		return pt;
}
