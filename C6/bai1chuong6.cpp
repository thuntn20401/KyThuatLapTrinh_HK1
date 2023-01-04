//bai 1

#include<iostream>
#define SIZE 100
using namespace std;
void xuat(int n);
void doiSangNhiPhan(int n);
void xuatKQ(long kq);
void chuyenDoiNhiPhan(int n);

int main()
{
	int n;
	cin>>n;
	chuyenDoiNhiPhan(n);
	
}
void chuyenDoiNhiPhan(int n)
{
	for(int i = 1; i<=n; i++)
	{
		doiSangNhiPhan(i);
		cout<<" ";
	}
}
void doiSangNhiPhan(int n)
{
	if(n==0)
		return;
	else
	{
		int r = n%2;
		doiSangNhiPhan(n/2);
		cout<<r;
	}
}
void xuatKQ(long kq)
{
	cout<<kq;
}
void xuat(int n)
{
	for(int i = 1; i<=n; i++)
		cout<<i<<" ";
}