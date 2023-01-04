//tinh tong hieu tich thuong va so sanh 2 phan so

#include<iostream>
using namespace std;

struct PHANSO
{
	int t;
	int m;
};
int UCLN(int x, int y);
void rutGon(PHANSO &x);
PHANSO tinhTong(PHANSO a, PHANSO b);
void nhapPS(PHANSO &x);
void xuatPS(PHANSO x);
int tinhThuong(PHANSO a, PHANSO b, PHANSO &thuong);
int main()

{
	PHANSO a, b;
	PHANSO thuong;
	nhapPS(a);
	nhapPS(b);
	//PHANSO t = tinhTong(a,b);
	//xuatPS(t);
	int kt = tinhThuong(a,b,thuong);
	if(kt == 0)
		cout<<"Khong thuc hien duoc phep chia";
	else
		xuatPS(thuong);
	return 0;
	
	
}
int tinhThuong(PHANSO a, PHANSO b, PHANSO &thuong)
{
	if(b.t ==0)
		return 0;
	thuong.t = a.t * b.m;
	thuong.m = a.m*b.t;
	rutGon(thuong);
	return 1;
}

int UCLN(int x, int y)
{
	x = abs(x);
	y = abs(y);
	if(x*y == 0)
		return x+y;
	while(x != y)
		if(x>y)
			x = x-y;
		else
			y = y-x;
	return x;
}
void rutGon(PHANSO &x)
{
	int uc = UCLN(x.t,x.m);
	x.t = x.t/uc;
	x.m=x.m/uc;
}
PHANSO tinhTong(PHANSO a, PHANSO b)
{
	PHANSO tong;
	tong.t = a.t*b.m + a.m*b.t;
	tong.m = a.m*b.m;
	rutGon(tong);
	return tong;
}
void nhapPS(PHANSO &x)
{
	cin>>x.t>>x.m;
}
void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m;
}
