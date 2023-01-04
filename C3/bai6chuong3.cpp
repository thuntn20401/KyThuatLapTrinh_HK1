// chuong 3. bai 6

#include<iostream>
using namespace std;
float tinhTong(int x, int n);
int tinhGiaiThua(int n);
int tinhLuyThua(int x, int p);
void nhap(int &x);
void xuat(float kq);

int main()
{
	int x, n;
	nhap(x);
	nhap(n);
	float kq = tinhTong(x,n);
	xuat(kq);
}

float tinhTong(int x, int n)
{
	float tong = 1;
	for(int i = 1; i<=n; i++)
		tong = tong + (float)tinhLuyThua(x,i)/tinhGiaiThua(i);
	return tong;
}
int tinhGiaiThua(int n)
{
	int gt = 1;
	for(int i = 2; i<=n; i++)
		gt = gt*i;
	return gt;
}
int tinhLuyThua(int x, int p)
{
	int kq = 1;
	while(p--)
		kq = kq * x;
	return kq;
	
}
void nhap(int &x)
{
	cin>>x;
}
void xuat(float kq)
{
	cout<<kq;
}