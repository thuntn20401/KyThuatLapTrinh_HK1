//tao mang so phuc. tinh tong tich

#include<iostream>
using namespace std;


struct SOPHUC
{
	int phanthuc, phanao;
};
void nhapMangSP(SOPHUC A[], int &n);
void nhap(SOPHUC &a);
void xuat(SOPHUC b);
void xuatMangSP(SOPHUC A[], int n);
SOPHUC tinhTong(SOPHUC a, SOPHUC b);
SOPHUC tinhTongMang(SOPHUC A[], int n);
SOPHUC tinhTich(SOPHUC a, SOPHUC b);
SOPHUC tinhTichMang(SOPHUC A[], int n);
int main()
{
	SOPHUC A[100];
	int n;
	nhapMangSP(A,n);
	SOPHUC tong = tinhTongMang(A,n);
	SOPHUC tich = tinhTichMang(A,n);
	xuat(tong);
	xuat(tich);
	//xuatMangSP(A,n);
	return 0;
}
SOPHUC tinhTich(SOPHUC a, SOPHUC b)
{
	SOPHUC tich;
	tich.phanthuc = a.phanthuc*b.phanthuc - a.phanao*b.phanao;
	tich.phanao = a.phanthuc*b.phanao + a.phanao*b.phanthuc;
	return tich;
}
SOPHUC tinhTichMang(SOPHUC A[], int n)
{
	SOPHUC tich = A[0];
	for(int i = 1; i<n; i++)
		tich = tinhTich(tich,A[i]);
	return tich;
}
SOPHUC tinhTongMang(SOPHUC A[], int n)
{
	SOPHUC tong = A[0];
	for(int i = 1;i<n;i++)
		tong = tinhTong(tong,A[i]);
	return tong;
}
SOPHUC tinhTong(SOPHUC a,SOPHUC b)
{
	SOPHUC kq;
	kq.phanthuc = a.phanthuc + b.phanthuc;
	kq.phanao = a.phanao + b.phanao;
	return kq;
}
void nhapMangSP(SOPHUC A[], int &n)
{
	cin>>n;
	for(int i = 0;i<n;i++)
		nhap(A[i]);
}
void xuatMangSP(SOPHUC A[], int n)
{
	for(int i = 0; i<n; i++)
		xuat(A[i]);
}
void nhap(SOPHUC &a)
{
	cin>>a.phanthuc>>a.phanao;
}
void xuat(SOPHUC b)
{
	cout<<b.phanthuc<<"+"<<b.phanao<<"i"<<endl;
}