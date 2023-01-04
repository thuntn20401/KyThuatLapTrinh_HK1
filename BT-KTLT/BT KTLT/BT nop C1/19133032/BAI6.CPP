#include <stdio.h>
#include <math.h>
struct Diem
{
	int x;
	int	y;
}
;
int dem_hd_duong (Diem A[], int n);
int dem_diem_khong_trung (Diem A[], int n);
Diem tim_hd_max (Diem A[], int n);
Diem tim_hd_min (Diem A[], int n);
Diem diem_gan_O (Diem A[], int n);
double tinh_khoang_cach_den_O (Diem a);
void nhap_diem (Diem &a);
void xuat_diem (Diem a);
void nhap_mang_diem (Diem A[], int &n);
void xuat_mang_diem (Diem A[], int n);
void xuat (int kq);
void main ()
{
	int n; 
	Diem A[100], min, max, kq;
	nhap_mang_diem (A, n);
	xuat_mang_diem (A, n);
	int d1 = dem_hd_duong (A, n);
	xuat (d1);
	int d2 = dem_diem_khong_trung (A, n);
	xuat (d2);
	min = tim_hd_min (A, n);
	xuat_diem (min);
	max = tim_hd_max (A, n);
	xuat_diem (max);
	kq = diem_gan_O (A, n);
	xuat_diem (kq);

}
// dem so luong diem co hoanh do duong
int dem_hd_duong (Diem A[], int n)
{
	printf ("\nso luong diem co hoanh do duong: ");
	int d=0;
	for (int i=0; i<n; i++)
		if (A[i].x >0)
			d++;
	return d;
}
// dem so luong diem khong trung voi cac diem khac
int dem_diem_khong_trung (Diem A[], int n)
{
	printf ("\nso luong diem khong trung: ");
	int d = 1;
	int tam;
	for (int i=1; i<n; i++)
	{
		for (int j=0; j<i; j++)
		{
			if (A[j].x == A[i].x && A[j].y == A[i].y)
			{
				tam = 0;
				break;

			}
		
			else
				tam = 1;
		}
	if (tam==1)
		d++;
	}
	return d;

}

// tim diem co hoanh do lon nhat
Diem tim_hd_max (Diem A[], int n)
{
	printf ("\ndiem co hoanh do lon nhat: ");
	Diem max;
	max = A[0];
	for (int i=1; i<n; i++)	
		if (A[i].x > max.x)
			max = A[i];
	return max;
}
// tim diem co hoanh do nho nhat
Diem tim_hd_min (Diem A[], int n)
{
	printf ("\ndiem co hoanh do nho nhat: ");
	Diem min;
	min = A[0];
	for (int i=1; i<n; i++)
		if (A[i].x < min.x)
			min = A[i];
	return min;
}
// tinh khoang cach 1 diem den O
double tinh_khoang_cach_den_O (Diem a)
{
	double d = sqrt(double(a.x*a.x + a.y*a.y));
	return d;
}
// tim diem gan O nhat
Diem diem_gan_O (Diem A[], int n)
{
	printf ("\ndiem gan O nhat: ");
	Diem kq = A[0];
	double d = tinh_khoang_cach_den_O (A[0]);
	for (int i=1; i<n; i++)
		if (tinh_khoang_cach_den_O (A[i]) < d)
		{
			d = tinh_khoang_cach_den_O (A[i]);
			kq = A[i];
		}
	return kq;

}
// nhap 1 diem
void nhap_diem (Diem &a)
{
	scanf ("%d%d", &a.x, &a.y);
}
// xuat 1 diem
void xuat_diem (Diem a)
{
	printf ("(%d,%d) ", a.x, a.y);
}
// nhap mang diem
void nhap_mang_diem (Diem A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		nhap_diem (A[i]);
}
// xuat mang diem
void xuat_mang_diem (Diem A[], int n)
{
	for (int i= 0; i<n; i++)
		xuat_diem (A[i]);
	
}
// xuat 1 ket qua
void xuat (int kq)
{
	printf ("%d", kq);
}
