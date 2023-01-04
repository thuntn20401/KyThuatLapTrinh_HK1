//chuong 4. bai 8

#include<iostream>
using namespace std;
int timSoN(int n, float A);
void xuat(int kq);
void nhap(float &a);

int main()
{
	float A;
	int n;
	nhap(A);
	int kq = timSoN(n,A);
	xuat(kq);
}

int timSoN(int n, float A)
{
	n = 0;
	float tong = 0.0;
	while(tong <= A)
	{
		n = n+1;
		tong = tong + (float)1/n;
	}
	return n;
}
void xuat(int kq)
{
	cout<<kq;
}
void nhap(float &a)
{
	cin>>a;
}