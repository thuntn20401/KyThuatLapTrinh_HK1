// bai 3

#include<iostream>
using namespace std;

int tinhGiaiThua(int n);
void xuat(int kq);

int main()
{
	int n;
	cin>>n;
	int gt = tinhGiaiThua(n);
	xuat(gt);
}

int tinhGiaiThua(int n)
{
	if(n==0)
		return 1;
	else
		return n * tinhGiaiThua(n-1);
}
void xuat(int kq)
{
	cout<<kq;
}