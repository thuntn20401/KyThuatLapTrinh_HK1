#include <stdio.h>
void nhap (int &x);
void nhapMang (int A[], int &n);
void xuat (int kq);
int timKiemNhiPhan (int A[], int n, int x);
void main ()
{
	int A[100];
	int x, n;
	printf ("Nhap x: ");
	nhap (x);
	nhapMang (A, n);
	int kq = timKiemNhiPhan (A, n, x);
	xuat (kq);	
}
void nhap (int &x)
{
	scanf ("%d", &x);
}
void nhapMang (int A[], int &n)
{
	printf ("Nhap n: ");
	nhap (n);
	printf ("Nhap mang n phan tu: ");
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
void xuat (int kq)
{
	printf ("Vi tri: %d\n", kq);
}
int timKiemNhiPhan (int A[], int n, int x)
{
	
	int l = 0;
	int r = n-1;
    int m; 

    while(l<=r) 
    {
		m = (l+r)/2;

        if(A[m] == x)
			return m;

        else 
		{
			if(A[m] > x)    
				r = m - 1;
			 else                     
				l = m + 1;
		}
    } 
    return -1;            
}
 
