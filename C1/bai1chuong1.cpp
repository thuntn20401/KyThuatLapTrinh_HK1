#include<iostream>
#include<string.h>

using namespace std;


struct DATE
{
	int ngay, thang,nam;
};
struct HOCSINH
{
	char MSHS[6];
	char hoten[30];
	DATE ngaysinh;
	char diachi[51];
	char phai[4];
	float diemtb;
};

void nhapHS(HOCSINH &x);
void xuatHS(HOCSINH x);
void nhapNgaySinh(DATE &x);
int main()
{
	//HOCSINH HS[];
	//int n;
	HOCSINH x;
	nhapHS(x);
	xuatHS(x);	
	return 0;
}

void nhapNgaySinh(DATE &x)
{
	cin>>x.ngay>>x.thang>>x.nam;
}
void xuatNgaySinh(DATE x)
{
	cout<<x.ngay<<x.thang<<x.nam;
}
void nhapHS(HOCSINH &x)
{
	fflush(stdin);
	cin.getline(x.MSHS,6);
	fflush(stdin);
	cin.getline(x.hoten,30);
	fflush(stdin);
	nhapNgaySinh(x.ngaysinh);
	fflush(stdin);
	cin.getline(x.diachi,51);
	fflush(stdin);
	cin.getline(x.phai,4);
	fflush(stdin);
	cin>>x.diemtb;
}
void xuatHS(HOCSINH x)
{
	cout<<x.MSHS;
	cout<<x.hoten;
	cout<<x.ngaysinh.ngay<<"/"<<x.ngaysinh.thang<<"/"<<x.ngaysinh.nam;
	cout<<x.diachi;
	cout<<x.phai;
	cout<<x.diemtb;
	
}