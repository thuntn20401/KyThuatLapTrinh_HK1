//chuong 3. bai 2
#include<iostream>
using namespace std;
int tinhTong(int n);
void nhap(int &n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq = tinhTong(n);
	xuat(kq);
}
int tinhTong(int n)
{
	int tong = 0;
	int k = 0;
	for(int i = 1; i<=n; i++)
	{
		k = k + i;
		tong = tong + k;
	}
	return tong;
}
void nhap(int &n)
{
	do
	{
		cin>>n;
		if(n<0)
			cout<<"Nhap sai gia tri n!";
	}while(n<0);
}
void xuat(int kq)
{
	cout<<kq;
}