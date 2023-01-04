//chuong 3. bai 3
#include<iostream>
using namespace std;
float tinhTong(int n);
void nhap(int &n);
void xuat(float kq);
int main()
{
	int n;
	nhap(n);
	float kq = tinhTong(n);
	xuat(kq);
}
float tinhTong(int n)
{
	float tong = 0.0;
	int k = 0;
	for(int i = 1; i<=n; i++)
	{
		k = k + i;
		tong = tong + (float)1/k;
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
void xuat(float kq)
{
	cout<<kq;
}