//chuong 3. bai 1

#include<iostream>
using namespace std;
int tinhLuyThua(int x, int p);
void nhap(int &x);
void xuat(int kq);
int main()
{
	int x, p;
	nhap(x);
	nhap(p);
	int kq = tinhLuyThua(x,p);
	xuat(kq);
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
void xuat(int kq)
{
	cout<<kq;
}