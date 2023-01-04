//tinh tong mang phan so, sap xep

#include<iostream>
using namespace std;

struct PHANSO
{
	int t,m;
};
void xuatPS(PHANSO x);
void nhapPS(PHANSO &x);
void nhapMang(PHANSO A[], int &n);
void xuatMang(PHANSO A[], int n);
int UCLN(int a, int b);
PHANSO tinhTongMang(PHANSO A[], int n);
PHANSO tinhTong(PHANSO a, PHANSO b);
void rutGon(PHANSO &a);
PHANSO timMax(PHANSO A[], int n);
void chuanHoa(PHANSO &x);
PHANSO timMax(PHANSO A[], int n);
int soSanh(PHANSO a, PHANSO b);
int main()
{
	PHANSO A[100];
	int n;
	nhapMang(A,n);
	PHANSO tong = tinhTongMang(A,n);
	xuatPS(tong);
	PHANSO max = timMax(A,n);
	xuatPS(max);
	return 0;
}
PHANSO timMax(PHANSO A[], int n)
{
	PHANSO max = A[0];
	for(int i = 1;i<n;i++)
		if((soSanh(A[i],max)) > 0)
			return A[i];
	return max;
}
int soSanh(PHANSO a, PHANSO b)
{
	chuanHoa(a);
	chuanHoa(b);
	if(a.t*b.m > b.t*a.m)
		return 1;
	else 
		if(a.t*b.m < b.t*a.m)
			return -1;
		else 
			return 0;
}
void chuanHoa(PHANSO &x)
{
	x.t = -x.t;
	x.m = -x.m;
}
PHANSO tinhTongMang(PHANSO A[], int n)
{
	PHANSO t = A[0];
	for(int i = 1;i<n;i++)
		t = tinhTong(t,A[i]);
	return t;
}
PHANSO tinhTong(PHANSO a, PHANSO b)
{
	PHANSO tong;
	tong.t = a.t*b.m + a.m*b.t;
	tong.m = a.m * b.m;
	rutGon(tong);
	return tong;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if(a*b==0)
		return a+b;
	while(a!=b)
		if(a>b)
			a = a-b;
		else
			b = b-a;
	return a;
}
void rutGon(PHANSO &a)
{
	int uc = UCLN(a.t,a.m);
	a.t = a.t/uc;
	a.m = a.m/uc;	
}
void nhapPS(PHANSO &x)
{
	cin>>x.t>>x.m;
}
void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m<<endl;
}
void nhapMang(PHANSO A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n;i++)
		nhapPS(A[i]);
}
void xuatMang(PHANSO A[], int n)
{
	for(int i = 0;i<n;i++)
		xuatPS(A[i]);
}