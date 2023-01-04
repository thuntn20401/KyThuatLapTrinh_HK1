#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int &a, int &b);
void xuat(int cohieu, float kq);
int tinhThuong(int a, int b, float &th);

void main()
{
	int a,b;
	nhap(a,b);
	float kq;
	int cohieu = tinhThuong(a,b,kq);
	xuat(cohieu,kq);
}
int tinhThuong(int a, int b, float &th)
{
	if (b==0)
		return 0;
	else
	{
		th = float(a)/b;
		return 1;
	}
}
void xuat(int cohieu, float kq)
{
	if (cohieu == 0)
		cout<<"Khong chia duoc";
	else
	{
		cout<<setprecision(3)<<fixed;
		cout<<kq;
	}
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}