//bai 6
#include<iostream>
using namespace std;
long tinhFibo(int n);
void nhap(int &n);
void xuat(long kq);
int main()
{
	int n;
	nhap(n);
	long kq = tinhFibo(n);
	xuat(kq);
}

long tinhFibo(int n)
{
	if( (n==1) || (n==2) )
		return 1;
	else
		return tinhFibo(n-2) + tinhFibo(n-1);
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(long kq)
{
	cout<<kq;
}