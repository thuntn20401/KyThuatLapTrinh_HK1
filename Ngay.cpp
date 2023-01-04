//khoang cach ngay thang nam

#include<iostream>
using namespace std;


struct DATE 
{
	int d,m,y;
};
int tinhKhoangCach2Ngay(DATE n1, DATE n2);
bool hopLe(DATE n1);
int soNgayTrongThang(int m, int y);
bool laNamNhuan(int y);
void nhap(DATE &n1);
void xuat(bool kt, DATE n);
int tinhSoNgay(DATE n);
int tinhSoNgayTuDauNam(DATE n);
int tinhSoNgayTrongThang(int m, int y);
int main()
{
	DATE n1,n2;
	nhap(n1);
	nhap(n2);
	int songay = tinhKhoangCach2Ngay(n1,n2);
	//xuat(kt,kq);
	//bool co = hopLe(n1);
	//xuat(co,n1);
	return 0;
}

int tinhSoNgay(int d, int m, int y)
{
	int kc = 0;
	for(int i = 1;i<y;i++)
		if(laNamNhuan(i) == true)
			kc = kc + 366;
		else
			kc = kc + 365;
	kc = kc + tinhSoNgayTuDauNam(n);
	return kc;
}

int tinhSoNgayTuDauNam(DATE n)
{
	int songay = n.d;
	for(int i = 1;i<n.m;i++)
		songay = songay + tinhSoNgayTrongThang(i,n.y);
	return songay;
}
int tinhKhoangCach2Ngay(DATE n1, DATE n2)
{
	if(hopLe(n1) && hopLe(n2))
	{
		int kc1 = tinhSoNgay(n1.d,n1.m,n1.y);
		int kc2 = tinhSoNgay(n2.d,n2.m,n2.y);
		int songay = abs(kc1,kc2);
		return songay;
	}
	else
		return 0;
}
bool hopLe(DATE n1)
{
	if(n1.d>0 && n1.m>0 && n1.y>0 && n1.m<=12 && n1.d<=soNgayTrongThang(n1.m,n1.y))
		return true;
	return false; 
}
int tinhSoNgayTrongThang(int m, int y)
{
	if(m==4 || m==6 || m==9 || m==11)
		return 30;
	if(m==2)
		if(laNamNhuan(y))
			return 29;
		else
			return 28;
	return 31;
}
bool laNamNhuan(int y)
{
	if((y%4 == 0 && y%100 != 0) || (y%400 == 0))
		return true;
	return false;
}
void nhap(DATE &n1)
{
	cin>>n1.d>>n1.m>>n1.y;
}
void xuat(bool kt, DATE n)
{
	if(kt == true)
		cout<<n.d<<" "<<n.m<<" "<<n.y;
	else
		cout<<"Ngay thang nam khong hop le!";
}
