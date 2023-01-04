// tinh ngay thang nam tiep theo

#include<stdio.h>

int A[13] = {31,31,28,31,30,31,30,31,31,30,31,30,31};
void tinhNgayThangNamTiepTheo(int &d, int &m, int &y);
int laNamNhuan(int y);
int hopLe(int d, int m, int y);
void nhap (int &d, int &m, int &y);
void xuat(int d, int m, int y);

int main()
{
	int d,m,y;
	nhap(d,m,y);
	if(hopLe(d,m,y))
	{
		tinhNgayThangNamTiepTheo(d,m,y);
		xuat(d,m,y);
	}
	else
		printf("Khong hop le");
	return 1;
}
void tinhNgayThangNamTiepTheo(int &d, int &m, int &y)
{
	if(d<A[m])
		d++;
	else
		d=1;
		if(m==12)
		{
			m=1;
			y++;
		}
		else
			m++;
	
}
int laNamNhuan(int y)
{
	if((y%4==0 && y%100!=0) || (y%400==0))
		return 1;
	return 0;
}
int hopLe(int d, int m, int y)
{
	if(y>0 && laNamNhuan(y))
		A[2]++; 	
	if(y<=0 || m<1 || m>12 || d<1 || d>A[m])
		return 0;
	
	else
		return 1;
}
void nhap (int &d, int &m, int &y)
{
	scanf("%d%d%d", &d,&m,&y);
}
void xuat(int d, int m, int y)
{
	printf("%d %d %d \n", d,m,y);
}



