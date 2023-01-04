#include<iostream>
using namespace std;
#define MAX 50
struct PHANSO
{
	int t,m;
};
void nhapPS(PHANSO &x);
void xuatPS(PHANSO x);
void nhapMangPS(PHANSO A[], int &n);
void xuatMangPS(PHANSO A[], int n);
int soSanh(PHANSO a, PHANSO b);
PHANSO timMaxMang(PHANSO A[], int n);
int UCLN(int a, int b);
void rutGon(PHANSO &x);
PHANSO tinhTong(PHANSO a, PHANSO b);
PHANSO tinhTongMang(PHANSO A[], int n);
PHANSO tinhTich(PHANSO a, PHANSO b);
PHANSO tinhTichMang(PHANSO A[], int n);
void xuatNghichDao(PHANSO a);
void xuatPSNghichDao(PHANSO A[], int n);
int main()
{
	int n;
	PHANSO A[MAX];
	nhapMangPS(A,n);
	//xuatMangPS(A,n);
	PHANSO max = timMaxMang(A,n);
	PHANSO tong = tinhTongMang(A,n);
	PHANSO tich = tinhTichMang(A,n);
	xuatPSNghichDao(A,n);
	//xuatPS(tich);
	//xuatPS(tong);
	//xuatPS(max);
	return 0;
	
}
void xuatNghichDao(PHANSO a)
{
	cout<<a.m<<"/"<<a.t<<" ";
}
void xuatPSNghichDao(PHANSO A[], int n)
{
	for(int i = 0;i<n;i++)
	{
		rutGon(A[i]);
		xuatNghichDao(A[i]);
	}
}
PHANSO tinhTich(PHANSO a, PHANSO b)
{
	PHANSO tich;
	tich.t = a.t*b.t;
	tich.m = a.m*b.m;
	rutGon(tich);
	return tich;
}
PHANSO tinhTichMang(PHANSO A[], int n)
{
	PHANSO tich = A[0];
	for(int i = 1;i<n;i++)
		tich = tinhTich(tich,A[i]);
	return tich;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if(a*b == 0)
		return a+b;
	while(a!=b)
		if(a>b)
			a = a-b;
		else
			b = b-a;
	return a;
}
void rutGon(PHANSO &x)
{
	int uc = UCLN(x.t,x.m);
	x.t = x.t/uc;
	x.m = x.m/uc;
}
PHANSO tinhTong(PHANSO a, PHANSO b)
{
	PHANSO tong;
	tong.t = a.t*b.m + b.t*a.m;
	tong.m = a.m*b.m;
	rutGon(tong);
	return tong;
}
PHANSO tinhTongMang(PHANSO A[], int n)
{
	PHANSO tong = A[0];
	for(int i = 1;i<n;i++)
		tong = tinhTong(tong,A[i]);
	return tong;
}
int soSanh(PHANSO a, PHANSO b)
{
	a.t = a.t * b.m;
	b.t = b.t *a.m;
	if(a.t > b.m)
		return 1;
	return 0;
}
PHANSO timMaxMang(PHANSO A[], int n)
{
	PHANSO max = A[0];
	for(int i = 0; i<n; i++)
		if(soSanh(A[i],max) == 1)
			max = A[i];
	return max;
	
}
void nhapMangPS(PHANSO A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		nhapPS(A[i]);
}
void xuatMangPS(PHANSO A[], int n)
{
	for(int i = 0;i<n;i++)
		xuatPS(A[i]);
}
void nhapPS(PHANSO &x)
{
	cin>>x.t>>x.m;
}
void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m<<" ";
}