//chuong 3. bai 7

#include<iostream>
using namespace std;
int tinhGiaTriPTThuN(int n);
void xuat(int kq);
void nhap(int &x);
int main()
{
	int n;
	nhap(n);
	int kq = tinhGiaTriPTThuN(n);
	xuat(kq);
}
int tinhGiaTriPTThuN(int n)
{
    int a1=1, a2=1;
    if (n == 1 || n == 2)
        return a1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
void xuat(int kq)
{
	cout<<kq;
}
void nhap(int &x)
{
	cin>>x;
}