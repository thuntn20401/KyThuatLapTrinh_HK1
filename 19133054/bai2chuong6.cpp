#include<iostream>
using namespace std;
void nhap(int &x);
int tinhToHop(int k, int n);
void xuat(int kq);

int main()
{
    int n, k;
    nhap(k);
    nhap(n);
    int kq = tinhToHop(k,n);
    xuat(kq);
    return 0;
}
int tinhToHop(int k, int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return tinhToHop(k - 1, n - 1) + tinhToHop(k, n - 1);
}
void xuat(int kq)
{
	cout<<kq;
}
void nhap(int &x)
{
	cin>>x;
}