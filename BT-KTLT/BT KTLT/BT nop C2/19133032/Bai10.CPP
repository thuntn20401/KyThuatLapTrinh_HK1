#include <stdio.h>
int namNhuan (int y);
int kiemTraHopLe (int d, int m, int y);
void nhapNgay (int &d, int &m, int &y);
void ngayTiepTheo (int &d, int &m, int &y);
void xuatNgay (int d, int m, int y);
int A[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
void main ()
{
	int d, m, y;
	nhapNgay (d, m, y);
	ngayTiepTheo (d, m, y);
	xuatNgay (d, m, y);
}

int namNhuan (int y)
{
	if ((y%4==0 && y%100!=0) || (y%400==0))
		return 1;
	return 0;
}

int kiemTraHopLe (int d, int m, int y)
{
	if (y>0 && namNhuan(y))
		A[2]++;
	if (y<=0 || m<1 || m>12 || d<1 || d>A[m])
		return 0;
	else
		return 1;

}

void nhapNgay (int &d, int &m, int &y)
{
	printf ("Nhap ngay: ");
	int hople;
	do 
	{
		scanf ("%d%d%d", &d, &m, &y);
		hople = kiemTraHopLe (d, m, y);
		if (!hople)
			printf ("Ngay vua nhap khong hop le\nNhap lai: ");
	}
	while (!hople);
}
void ngayTiepTheo (int &d, int &m, int &y)
{
	if (d==A[m])
	{
		if (m==12)
		{
			d=1;
			m=1;
			y++;
		}
		else
		{
			d=1;
			m++;
		}
	}
	else
	{
		d++;
	}
}

void xuatNgay (int d, int m, int y)
{
	printf ("Ngay tiep theo: %d %d %d ", d, m, y);
}
