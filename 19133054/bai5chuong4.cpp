//bai 5

#include<iostream>
using namespace std;
int tinhTH(int n, int k);
void xuat(int kq);
void nhap(int &n);
int main()
{
	int n,k;
	nhap(n);
	nhap(k);
	int kq = tinhTH(n,k);
	xuat(kq);
	return 0;
}
int tinhTH(int n, int k)
{
	if(k==1)
		return n;
	else
		if(n==k)
			return 1;
	else
		return ( tinhTH(n-1,k) + tinhTH(n-1,k-1) );
}


void xuat(int kq)
{
	cout<<kq;
}
void nhap(int &n)
{
	cin>>n;
}