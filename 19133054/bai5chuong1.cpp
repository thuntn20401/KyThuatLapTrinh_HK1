#include<iostream>
using namespace std;


struct SOPHUC
{
	int phanthuc, phanao;
};

void xuat(SOPHUC a);
void nhap(SOPHUC &a);
SOPHUC tinhTongSoPhuc(SOPHUC a, SOPHUC b);
SOPHUC tinhHieuSoPhuc(SOPHUC a, SOPHUC b);
SOPHUC tinhTichSoPhuc(SOPHUC a, SOPHUC b);

int main()
{
	SOPHUC a,b;
	nhap(a);
	nhap(b);
	SOPHUC tong = tinhTongSoPhuc(a,b);
	SOPHUC hieu = tinhHieuSoPhuc(a,b);
	SOPHUC tich = tinhTichSoPhuc(a,b);
	xuat(tong);
	xuat(hieu);
	xuat(tich);
	//xuat(a);
	//xuat(b);
	return 1;
}
SOPHUC tinhTichSoPhuc(SOPHUC a, SOPHUC b)
{
	SOPHUC tich;
	tich.phanthuc = a.phanthuc*b.phanthuc - a.phanao*b.phanao;
	tich.phanao = a.phanthuc*b.phanao + a.phanao*b.phanthuc;
	return tich;
}
SOPHUC tinhHieuSoPhuc(SOPHUC a, SOPHUC b)
{
	SOPHUC hieu;
	hieu.phanthuc = a.phanthuc - b.phanthuc;
	hieu.phanao = a.phanao - b.phanao;
	return hieu;
}
SOPHUC tinhTongSoPhuc(SOPHUC a, SOPHUC b)
{
	SOPHUC tong;
	tong.phanthuc = a.phanthuc + b.phanthuc;
	tong.phanao = a.phanao + b.phanao;
	return tong;
}
void nhap(SOPHUC &a)
{
	cin>>a.phanthuc>>a.phanao;
}
void xuat(SOPHUC a)
{
	cout<<a.phanthuc<<"+"<<a.phanao<<"i"<<endl;
}