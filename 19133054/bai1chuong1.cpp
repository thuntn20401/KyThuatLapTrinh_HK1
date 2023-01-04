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
	gets(x.MSHS);
	gets(x.hoten);
	nhapNgaySinh(x.ngaysinh);
	gets(x.diachi);
	gets(x.phai);
	cin>>x.diemtb;
}
void xuatHS(HOCSINH x)
{
	puts(x.MSHS);
	puts(x.hoten);
	xuatNgaySinh(x.ngaysinh);
	puts(x.diachi);
	puts(x.phai);
	cout<<x.diemtb;
	
}