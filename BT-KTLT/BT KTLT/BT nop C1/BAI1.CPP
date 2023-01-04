#include <stdio.h>
#include <math.h>
struct PhanSo
{
	int tu;
	int mau;
};
void xuatPhanSo (PhanSo a);
void nhapPhanSo (PhanSo &a);
int gcd(int a, int b);
int lcm(int a, int b);
PhanSo rutGonPhanSo (PhanSo &a);
void quyDongPhanSo (PhanSo &a, PhanSo &b);
PhanSo tinhTong (PhanSo a, PhanSo b);
PhanSo tinhHieu (PhanSo a, PhanSo b);
PhanSo tinhTich (PhanSo a, PhanSo b);
PhanSo tinhThuong (PhanSo a, PhanSo b);
void soSanh (PhanSo a, PhanSo b);
void xuat (PhanSo kq);

void main ()
{
	PhanSo a, b, t, h, s, th;
	nhapPhanSo (a);
	printf ("Phan So a: ");
	xuatPhanSo (a);
	nhapPhanSo (b);
	printf ("Phan So b: ");
	xuatPhanSo (b);
	t = tinhTong (a, b);
	printf ("Tong = ");
	xuat(t);
	h = tinhHieu (a, b);
	printf ("Hieu = ");
	xuat (h);
	s = tinhTich (a, b);
	printf ("Tich = ");
	xuat (s);
	th = tinhThuong	(a, b);
	printf ("Thuong = ");
	xuat (th);
	quyDongPhanSo (a, b);
	soSanh (a, b);
	
}

void nhapPhanSo (PhanSo &a)
{
	scanf ("%d%d", &a.tu, &a.mau);
}
void xuatPhanSo (PhanSo a)
{
	printf ("%d/%d\n", a.tu, a.mau);
}
int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}
PhanSo rutGonPhanSo (PhanSo &a)
{
	int GCD = gcd(a.tu, a.mau);
	if (GCD ==1)
		return a;
	a.tu = a.tu/GCD;
	a.mau = a.mau/GCD;
	return a;
}
void quyDongPhanSo (PhanSo &a, PhanSo &b)
{
	int LCM = lcm (a.mau, b.mau);
	a.tu = a.tu*(LCM/a.mau);
	a.mau = LCM;
	b.tu = b.tu*(LCM/b.mau);
	b.mau = LCM;
	printf ("Quy dong: a=%d/%d b=%d/%d\n", a.tu, a.mau, b.tu, b.mau);
}
PhanSo tinhTong (PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.mau + a.mau*b.tu;
	kq.mau = a.mau*b.mau;
	kq = rutGonPhanSo (kq);
	return kq;
}
PhanSo tinhHieu (PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.mau - a.mau*b.tu;
	kq.mau = a.mau*b.mau;
	kq = rutGonPhanSo (kq);
	return kq;
}
PhanSo tinhTich (PhanSo a, PhanSo b)
{ 
	PhanSo kq;
	kq.tu = a.tu*b.tu;
	kq.mau = a.mau*b.mau;
	kq = rutGonPhanSo (kq);
	return kq;
}
PhanSo tinhThuong (PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.mau;
	kq.mau = a.mau*b.tu;
	kq = rutGonPhanSo (kq);
	return kq;
}
void soSanh (PhanSo a, PhanSo b)
{
	printf ("So sanh: ");
	a= rutGonPhanSo (a);
	b = rutGonPhanSo (b);
	if (a.tu == b.tu && a.mau == b.mau)
		printf ("a=b");
	else
		if (a.tu*b.mau > b.tu*a.mau)
			printf ("a>b");
		printf ("a<b");
}
void xuat (PhanSo kq)
{
	printf ("%d/%d\n", kq.tu, kq.mau);
}
