//chuyen doi hon so sang phan so

#include<iostream>
using namespace std;


struct PHANSO
{
	int t,m;
};
struct HONSO
{
	int nguyen;
	PHANSO ps;
};

void nhapPS(PHANSO &a);
void xuatPS(PHANSO x);
void nhapHS(HONSO &a);
void xuatHS(HONSO x);
PHANSO chuyenHSSangPS(HONSO x);
void rutGon(PHANSO &x);
int UCLN(int a, int b);
PHANSO tinhTongPS(PHANSO a, PHANSO b);
HONSO chuyenPSSangHS(PHANSO x);
HONSO tinhTongHS(HONSO a, HONSO b);
PHANSO tinhTichPS(PHANSO a, PHANSO b);
HONSO tinhTichHS(HONSO a, HONSO b);
void xuongDong();
int main()
{
	HONSO a,b;
	nhapHS(a);
	nhapHS(b);
	PHANSO aa = chuyenHSSangPS(a);
	xuatPS(aa);
	xuongDong();
	HONSO y = chuyenPSSangHS(aa);
	xuatHS(y);
	xuongDong();
	HONSO t = tinhTongHS(a,b);
	xuatHS(t);
	xuongDong();
	HONSO tich = tinhTichHS(a,b);
	xuatHS(tich);
	//xuatHS(a);
	//xuatHS(b);
	return 0;
}


HONSO tinhTongHS(HONSO a, HONSO b)
{
	PHANSO aa = chuyenHSSangPS(a);
	PHANSO bb = chuyenHSSangPS(b);
	PHANSO tt = tinhTongPS(aa,bb);
	HONSO t = chuyenPSSangHS(tt);
	return t;
}
HONSO tinhTichHS(HONSO a, HONSO b)
{
	PHANSO aa = chuyenHSSangPS(a);
	PHANSO bb = chuyenHSSangPS(b);
	PHANSO cc = tinhTichPS(aa,bb);
	HONSO kq = chuyenPSSangHS(cc);
	return kq;
}
PHANSO tinhTichPS(PHANSO a, PHANSO b)
{
	PHANSO tich;
	tich.t = a.t*b.t;
	tich.m = a.m*b.m;
	rutGon(tich);
	return tich;
}
PHANSO chuyenHSSangPS(HONSO x)
{
	PHANSO kq;
	kq.m = x.ps.m;
	kq.t = x.ps.t + x.nguyen*x.ps.m;
	rutGon(kq);
	return kq;
}

HONSO chuyenPSSangHS(PHANSO x)
{
	HONSO kq;
	kq.nguyen = x.t/x.m;
	kq.ps.t = x.t%x.m;
	kq.ps.m = x.m;
	return kq;
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
void rutGon(PHANSO &x)
{
	int uc = UCLN(x.t,x.m);
	x.t = x.t/uc;
	x.m = x.m/uc;
}

PHANSO tinhTongPS(PHANSO a, PHANSO b)
{
	PHANSO tong;
	tong.t = a.t*b.m + a.m*b.t;
	tong.m = a.m*b.m;
	rutGon(tong);
	return tong;
}

void nhapPS(PHANSO &a)
{
	cin>>a.t>>a.m;
}
void xuatPS(PHANSO x)
{
	cout<<x.t<<"/"<<x.m;
}
void nhapHS(HONSO &a)
{
	cin>>a.nguyen;
	nhapPS(a.ps);
}
void xuatHS(HONSO x)
{
	cout<<x.nguyen<<" ";
	xuatPS(x.ps);
}
void xuongDong()
{
	cout<<"\n";
}