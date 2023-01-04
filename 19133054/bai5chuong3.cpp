//chuong 4. bai 5

#include<iostream>
using namespace std;
float tinhTong(int n);
void nhap(int &n);
void xuat(float kq);
int giaiThua(int n);
int main()
{
	int n;
	nhap(n);
	float kq = tinhTong(n);
	xuat(kq);
}
float tinhTong(int n)
{
	float tong = 1;
	for(int i = 2; i<=n;i++)
	{
		tong = tong + (float)1/giaiThua(i);
	}
	return tong;
}
int giaiThua(int n)
{
	int gt = 1;
	for(int i = 2; i<=n; i++)
		gt = gt*i;
	return gt;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(float kq)
{
	cout<<kq;
}