#include <stdio.h>
#include <math.h>
struct PhanSo
{
	int tu;
	int mau;
};
int uocChungLonNhat (int a, int b);
int boiChungNhoNhat (int a, int b);
int kiemTraHopLe (PhanSo a);
PhanSo chuanHoa (PhanSo &a);
void nhapPhanSo (PhanSo &a);
void xuatPhanSoVuaNhap (PhanSo a);
void xuatPhanSo (PhanSo a);
int kiemTraToiGian (PhanSo a);
int kiemTraAmDuong (PhanSo a);
PhanSo rutGonPhanSo (PhanSo &a);
PhanSo quyDongHaiPhanSo (PhanSo &a, PhanSo &b);
PhanSo tinhTong (PhanSo a, PhanSo b);
PhanSo tinhHieu (PhanSo a, PhanSo b);
PhanSo tinhTich (PhanSo a, PhanSo b);
PhanSo tinhThuong (PhanSo a, PhanSo b);
int soSanhHaiPhanSo (PhanSo a, PhanSo b);
void xuatKiemTraToiGian (int kt);
void xuatKiemTraAmDuong (int kt);
void xuatSS (int ss);


void main ()
{
	PhanSo a, b, tong, hieu, tich, thuong;
	nhapPhanSo (a);
	nhapPhanSo (b);
		printf ("xuat phan so a: ");
	xuatPhanSoVuaNhap (a);
		printf ("\nxuat phan so b: ");
	xuatPhanSoVuaNhap (b);
	int kt1 = kiemTraToiGian (a);
		printf ("\nkiem tra toi gian phan so a: ");
	xuatKiemTraToiGian (kt1);
	int kt2 = kiemTraToiGian (b);
		printf ("\nkiem tra toi gian phan so b: ");
	xuatKiemTraToiGian (kt2);
	int kt3 = kiemTraAmDuong (a);
		printf ("\nkiem tra am duong phan so a: ");
	xuatKiemTraAmDuong (kt3);
	int kt4 = kiemTraAmDuong (b);
		printf ("\nkiem tra am duong phan so b: ");
	xuatKiemTraAmDuong (kt4);
	rutGonPhanSo (a);
		printf ("\nrut gon phan so a: ");
	xuatPhanSo (a);
	rutGonPhanSo (b);
		printf ("\nrut gon phan so b: ");
	xuatPhanSo (b);
	quyDongHaiPhanSo (a, b);
		printf ("\nquy dong hai phan so: ");
		printf ("\n	phan so a: ");
	xuatPhanSo (a);
		printf ("\n	phan so b: ");
	xuatPhanSo (b);
	tong = tinhTong (a, b);
		printf ("\ntong hai phan so = ");
	xuatPhanSo (tong);
	hieu = tinhHieu (a, b);
		printf ("\nhieu hai phan so = ");
	xuatPhanSo (hieu);
	tich = tinhTich (a, b);
		printf ("\ntich hai phan so = ");
	xuatPhanSo (tich);
	thuong = tinhThuong (a, b);
		printf ("\nthuong hai phan so = ");
	if (b.tu == 0)
		printf ("khong chia duoc");
	else
		xuatPhanSo (thuong);
	int ss = soSanhHaiPhanSo (a, b);
		printf ("\nso sanh hai phan so: ");
	xuatSS (ss);
		printf ("\n");
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
int boiChungNhoNhat (int a, int b)
{
	int gcd = uocChungLonNhat (a, b);
	int lcm = (a*b)/gcd;
	return lcm;
}
PhanSo chuanHoa (PhanSo &a)
{
	if (a.mau<0)
	{
		a.tu = -a.tu;
		a.mau = -a.mau;
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
void nhapPhanSo (PhanSo &a)
{
	do
	{
		scanf ("%d%d", &a.tu, &a.mau);
		if (!kiemTraHopLe(a))
			printf ("mau so phai khac 0\nnhaplai phan so: ");		
	}
	while (!kiemTraHopLe(a));
}
void xuatPhanSoVuaNhap (PhanSo a)
{
	printf ("%d/%d", a.tu, a.mau);
}
void xuatPhanSo (PhanSo a)
{
	a = chuanHoa (a);
	if (a.tu == 0)
		printf ("%d", 0);
	else
		if (a.mau==1)
			printf ("%d", a.tu);
		else 
			printf ("%d/%d", a.tu, a.mau);
}
PhanSo rutGonPhanSo (PhanSo &a)
{
	int gcd = uocChungLonNhat (a.tu, a.mau);
		if (a.tu==0)
			return a;
		else
		{
			a.tu = a.tu/gcd;
			a.mau = a.mau/gcd;
		}
			return a;
}
PhanSo quyDongHaiPhanSo (PhanSo &a, PhanSo &b)
{
	int lcm = boiChungNhoNhat (a.mau, b.mau);
	a.tu = a.tu*(lcm/a.mau);
	a.mau = lcm;
	b.tu = b.tu*(lcm/b.mau);
	b.mau= lcm;
	return a;
	return b;
}
PhanSo tinhTong (PhanSo a, PhanSo b) 
{
		PhanSo kq;
		kq.tu = a.tu + b.tu;
		kq.mau = a.mau;
		kq= rutGonPhanSo (kq);
		return kq;
}
PhanSo tinhHieu (PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu - b.tu;
	kq.mau = a.mau;
	kq= rutGonPhanSo (kq);
	return kq;
}
PhanSo tinhTich (PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.tu;
	kq.mau = a.mau*b.mau;
	kq= rutGonPhanSo (kq);
	return kq;
}
PhanSo tinhThuong (PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.mau;
	kq.mau = a.mau*b.tu;
	kq= rutGonPhanSo (kq);
	return kq;	
}
int kiemTraToiGian (PhanSo a)
{
	if (uocChungLonNhat (a.tu, a.mau)==1)
		return 1;
	else
		return 0;
}
int kiemTraAmDuong (PhanSo a)
{
	a = chuanHoa (a);
	if (a.tu >0)
		return 1;
	else
		if (a.tu <0)
			return -1;
		else
			return 0;
}
int soSanhHaiPhanSo (PhanSo a, PhanSo b)
{
	a= rutGonPhanSo (a);
	b= rutGonPhanSo (b);
	if (a.tu == b.tu)
		return 0;
	else 
		if (a.tu > b.tu)
			return 1;
		else
			return -1;
}
void xuatKiemTraToiGian (int kt)
{
	if (kt==1)
		printf ("phan so da toi gian");
	else
		printf ("phan so chua toi gian");
}
void xuatKiemTraAmDuong (int kt)
{
	if (kt==1)
		printf ("la phan so duong");
	else 
		if (kt==-1)
			printf ("la phan so am");
		else
			printf ("la phan so 0");
}
void xuatSS (int ss)
{
	if (ss==0)
		printf ("hai phan so bang nhau");
	else 
		if (ss==1)
			printf ("phan so a lon hon phan so b");
		else 
			printf ("phan so b lon hon phan so a");
}
