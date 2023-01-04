#include <stdio.h>
#include <math.h>
#define SIZE 100
struct PhanSo
{
	int tu;
	int mau;
}
;
void xuatPhanSo (PhanSo a);
void nhapPhanSo (PhanSo &a);
void nhapMangPhanSo (PhanSo A[], int &n);
void xuatMangPhanSo (PhanSo A[], int n);
PhanSo timPhanSo_duong_dau_tien (PhanSo A[], int n);
int demPhanSo_duong (PhanSo A[], int n);
int demPhanSo_am (PhanSo A[], int n);
int gcd(int a, int b);
PhanSo rutGonPhanSo (PhanSo &a);
void rutGonMangPhanSo (PhanSo A[], int n);
PhanSo timMax (PhanSo A[], int n);
PhanSo timMin (PhanSo A[], int n);
int soSanh (PhanSo a, PhanSo b);
void sapXepTang (PhanSo A[], int n);
void sapXepGiam (PhanSo A[], int n);
void xuat (int kq);

void main ()
{
	int n;
	PhanSo A[SIZE], kq, max, min;
	nhapMangPhanSo (A, n);
		printf ("mang phan so vua nhap: ");
	xuatMangPhanSo (A, n);
	rutGonMangPhanSo (A, n);
		printf ("\nrut gon mang phan so: ");
	xuatMangPhanSo (A, n);
	int d1 = demPhanSo_duong (A, n);
		printf ("\nso luong phan so duong: ");
	xuat (d1);
	int d2 = demPhanSo_am (A, n);
		printf ("\nso luong phan so am: ");
	xuat (d2);
	kq = timPhanSo_duong_dau_tien (A, n);
		printf ("\nphan so duong dau tien: ");
	xuatPhanSo (kq);
	max = timMax (A, n);
		printf ("\nphan so lon nhat: ");
	xuatPhanSo (max);
	min = timMin (A, n);
		printf ("\nphan so nho nhat: ");
	xuatPhanSo (min);

	sapXepTang (A, n);
		printf ("\nsap xep tang: ");
	xuatMangPhanSo (A, n);	
	sapXepGiam (A, n);
		printf ("\nsap xep giam: ");
	xuatMangPhanSo (A, n);	
}
int uocChungLonNhat (int a, int b)
{
	a = abs (a);
	b = abs (b);
	if (a==0)
		return b;
	if (b==0)
		return a;
	while (a!=b)
	{
		if (a>b)
			a = a-b;
		else
			b = b-a;
	}
	return a;
}

int kiemTraHopLe (PhanSo a)
{
	int hople = 1;
	if (a.mau == 0)
		hople = 0;
	return hople;
}
PhanSo chuanHoa (PhanSo &a)
{
	if (a.mau <0)
	{
		a.tu = -a.tu;
		a.mau = -a.mau;
	}
	return a;
}
void nhapPhanSo (PhanSo &a)
{
	do
	{
		scanf ("%d%d", &a.tu, &a.mau);
		if (!kiemTraHopLe(a))
			printf("mau so phai khac 0\nnhap lai phan so: ");
	}
	while (!kiemTraHopLe(a));
}
void xuatPhanSo (PhanSo a)
{
	a = chuanHoa(a);
	if (a.tu == 0)
		printf ("%d; ", 0);
	else
		if (a.mau == 1)
			printf ("%d; ", 1);
		else
	printf ("%d/%d; ", a.tu, a.mau);
}
void nhapMangPhanSo (PhanSo A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		nhapPhanSo (A[i]);
}
void xuatMangPhanSo (PhanSo A[], int n)
{
	for (int i= 0; i<n; i++)
		xuatPhanSo (A[i]);
	
}
PhanSo rutGonPhanSo (PhanSo &a)
{
	a = chuanHoa(a);
	int gcd = uocChungLonNhat(a.tu, a.mau);
	if (a.tu == 0)
		return a;
	a.tu = a.tu/gcd;
	a.mau = a.mau/gcd;
	return a;
}
void rutGonMangPhanSo (PhanSo A[], int n)
{
	for (int i=0; i<n; i++)
		rutGonPhanSo(A[i]);
}
PhanSo timMax (PhanSo A[], int n)
{
	PhanSo max;
	max = A[0];
	for (int i=0; i<n; i++)
		if (soSanh (A[i], max)==1)
			max = A[i];
		return max;
}
int demPhanSo_duong (PhanSo A[], int n)
{
	int d=0;
	for (int i=0; i<n; i++)
		if (A[i].tu >0 && A[i].mau >0)
			d++;
		return d;

}
int demPhanSo_am (PhanSo A[], int n)
{
	int d=0;
	for (int i=0; i<n; i++)
		if (A[i].tu <0 || A[i].mau <0)
			d++;
		return d;
}
PhanSo timPhanSo_duong_dau_tien (PhanSo A[], int n)
{
	for (int i=0; i<n; i++)
		if (A[i].tu >0 && A[i].mau >0)
			break;
		return A[i];	
}

PhanSo timMin (PhanSo A[], int n)
{
	PhanSo min;
	min = A[0];
	for (int i=0; i<n; i++)
		if (soSanh (A[i], min)==-1)
			min = A[i];
		return min;

}
int soSanh (PhanSo a, PhanSo b)
{

	a = rutGonPhanSo (a);
	b = rutGonPhanSo (b);
	if (a.tu == b.tu && a.mau == b.mau)
		return 0;
	else
		if (a.tu*b.mau > b.tu*a.mau)
			return 1;
		return -1;
}
void sapXepTang (PhanSo A[], int n)
{
	PhanSo tam;
    for (int i=0; i<n - 1; i++)
	{
        for (int j=i+1; j < n; j++)
		{
            if (soSanh (A[i], A[j]) ==1)
			{
                
                tam = A[i];
                A[i] = A[j];
                A[j] = tam;        
            }
        }
    }
}
void xuat (int kq)
{
	printf ("%d", kq);
}
void sapXepGiam (PhanSo A[], int n)
{
	PhanSo tam;
    for (int i=0; i<n - 1; i++)
	{
        for (int j=i+1; j < n; j++)
		{
            if (soSanh (A[i], A[j]) ==-1)
			{
                
                tam = A[i];
                A[i] = A[j];
                A[j] = tam;        
            }
        }
    }
}



